// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSEARCHFEEDBACKLISTENERTARGETBIOMESTREAM_H
#define ATXSEARCHFEEDBACKLISTENERTARGETBIOMESTREAM_H

@class NSString;
@protocol ATXSearchFeedbackListenerTarget;

#import <Foundation/Foundation.h>

#import "ATXBiomeUIStream.h"

@interface ATXSearchFeedbackListenerTargetBiomeStream : NSObject <ATXSearchFeedbackListenerTarget>

 {
    ATXBiomeUIStream *_uiStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithBiomeUIStream:(id)arg0 ;
-(void)writeSpotlightEvent:(id)arg0 ;


@end


#endif