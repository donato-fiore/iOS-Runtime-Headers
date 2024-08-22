// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLBACKGROUNDRUNNER_H
#define PFLBACKGROUNDRUNNER_H

@class _DASActivity, RBSAssertion, NSString;
@protocol _DASExtensionRunner;

#import <Foundation/Foundation.h>

#import "QuickTypePFLBackgroundTask.h"

@interface PFLBackgroundRunner : NSObject <_DASExtensionRunner>



@property (readonly, nonatomic) _DASActivity *activity; // ivar: _activity
@property (retain, nonatomic) RBSAssertion *assertion; // ivar: _assertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) QuickTypePFLBackgroundTask *task; // ivar: _task


+(void)initialize;
-(BOOL)prepareForActivity:(id)arg0 ;
-(id)init;
-(unsigned char)start;
-(void)cleanup;
-(void)stop;


@end


#endif