// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NULINKEDCONTENTMANAGER_H
#define NULINKEDCONTENTMANAGER_H

@class NSString, NSArray;
@protocol NULinkedContentProvider;

#import <Foundation/Foundation.h>


@interface NULinkedContentManager : NSObject <NULinkedContentProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *linkedContentProviders; // ivar: _linkedContentProviders
@property (readonly) Class superclass;


-(id)initWithLinkedContentProviders:(id)arg0 ;
-(id)loadLinkedContentForHeadline:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(id)loadLinkedContentForHeadline:(id)arg0 withContext:(id)arg1 priority:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif