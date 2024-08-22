// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUPAGINGBLUEPRINTITEM_H
#define NUPAGINGBLUEPRINTITEM_H

@class NSString;
@protocol NUPage;

#import <Foundation/Foundation.h>


@interface NUPagingBlueprintItem : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<NUPage> *page; // ivar: _page


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPage:(id)arg0 ;
-(id)initWithPageID:(id)arg0 ;


@end


#endif