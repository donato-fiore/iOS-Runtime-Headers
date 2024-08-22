// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPAGINGBLUEPRINT_H
#define NUPAGINGBLUEPRINT_H

@class NSArray, NSOrderedSet, NSString;
@protocol NUPaging, NUPage;

#import <Foundation/Foundation.h>


@interface NUPagingBlueprint : NSObject <NUPaging>



@property (readonly, nonatomic) NSArray *allPages;
@property (retain, nonatomic) NSOrderedSet *blueprintItems; // ivar: _blueprintItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NUPage> *firstPage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUPage> *lastPage;
@property (readonly) Class superclass;


-(id)initWithPages:(id)arg0 ;
-(id)pageAfterIdentifier:(id)arg0 ;
-(id)pageBeforeForIdentifier:(id)arg0 ;
-(id)pageForIdentifier:(id)arg0 ;
-(void)forEachPage:(id)arg0 ;


@end


#endif