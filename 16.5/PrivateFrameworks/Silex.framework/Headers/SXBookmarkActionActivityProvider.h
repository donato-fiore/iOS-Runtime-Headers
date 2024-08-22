// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXBOOKMARKACTIONACTIVITYPROVIDER_H
#define SXBOOKMARKACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXBookmarkManager;

#import <Foundation/Foundation.h>


@interface SXBookmarkActionActivityProvider : NSObject <SXActionActivityProvider>

 {
    id<SXBookmarkManager> *_bookmarkManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;


@end


#endif