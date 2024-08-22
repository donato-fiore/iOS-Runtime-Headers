// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLBACKGROUNDRUNNER_H
#define PFLBACKGROUNDRUNNER_H

@class HMFObject, NSString;
@protocol _DASExtensionRunner, HMFLogging;


#import "HMIDESBackgroundTask.h"

@interface PFLBackgroundRunner : HMFObject <_DASExtensionRunner, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) HMIDESBackgroundTask *task; // ivar: _task


+(id)logCategory;
-(BOOL)arrayForKey:(id)arg0 info:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
-(BOOL)dictionaryForKey:(id)arg0 info:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
-(BOOL)numberForKey:(id)arg0 info:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
-(BOOL)prepareForActivity:(id)arg0 ;
-(BOOL)stringForKey:(id)arg0 info:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
-(id)getAttachmentFromRecipe:(id)arg0 name:(id)arg1 ;
-(id)init;
-(id)runSession:(id)arg0 jsonResult:(*id)arg1 error:(*id)arg2 ;
-(unsigned char)start;
-(void)stop;


@end


#endif