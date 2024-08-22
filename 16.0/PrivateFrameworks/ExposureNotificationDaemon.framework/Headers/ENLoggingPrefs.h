// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENLOGGINGPREFS_H
#define ENLOGGINGPREFS_H


#import <Foundation/Foundation.h>


@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}




+(id)sharedENLoggingPrefs;
-(BOOL)isRPILoggingAllowed;
-(BOOL)isSensitiveLoggingAllowed;
-(id)init;
-(void)loadLoggingPrefs;
-(void)setLoggingEntitledApp:(BOOL)arg0 ;


@end


#endif