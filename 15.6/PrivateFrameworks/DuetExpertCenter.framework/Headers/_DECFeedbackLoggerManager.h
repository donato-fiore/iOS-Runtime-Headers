// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECFEEDBACKLOGGERMANAGER_H
#define _DECFEEDBACKLOGGERMANAGER_H

@class NSArray, NSString;
@protocol _DECFeedbackLogger;

#import <Foundation/Foundation.h>


@interface _DECFeedbackLoggerManager : NSObject <_DECFeedbackLogger>

 {
    NSArray *_loggers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_createLoggers;
-(id)init;
-(void)logForExpert:(id)arg0 feedback:(id)arg1 category:(NSUInteger)arg2 consumer:(NSUInteger)arg3 ;


@end


#endif