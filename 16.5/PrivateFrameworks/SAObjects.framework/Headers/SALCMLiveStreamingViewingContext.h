// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALCMLIVESTREAMINGVIEWINGCONTEXT_H
#define SALCMLIVESTREAMINGVIEWINGCONTEXT_H

@class NSDate;


#import "SALCMViewingContext.h"

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *eventStartTime;
@property (nonatomic) BOOL watchingLive;


+(id)liveStreamingViewingContext;
+(id)liveStreamingViewingContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif