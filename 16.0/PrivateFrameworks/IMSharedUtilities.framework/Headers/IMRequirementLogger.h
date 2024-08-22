// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMREQUIREMENTLOGGER_H
#define IMREQUIREMENTLOGGER_H


#import <Foundation/Foundation.h>


@interface IMRequirementLogger : NSObject

@property char * categoryOverride; // ivar: _categoryOverride
@property unsigned char loggingLevel; // ivar: _loggingLevel
@property BOOL throwFailures; // ivar: _throwFailures


+(id)__singleton__im;
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg0 ;
-(id)description;
-(id)init;
-(struct IMRequirementFailed_t )requirementDidFail:(char *)arg0 ;
-(void)dealloc;
-(void)updateSettingsFromUserDefaults;


@end


#endif