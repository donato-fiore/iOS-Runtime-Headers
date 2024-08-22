// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYLOGGING_H
#define PFUBIQUITYLOGGING_H


#import <Foundation/Foundation.h>


@interface PFUbiquityLogging : NSObject

@property (nonatomic) int desiredLogLevel; // ivar: _desiredLogLevel


+(BOOL)canLogMessageAtLevel:(int)arg0 ;
+(void)initialize;
+(void)setLoggingLevel:(int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)userDefaultsChanged:(id)arg0 ;


@end


#endif