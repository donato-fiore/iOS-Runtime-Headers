// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDERRORUTILITIES_H
#define _CDERRORUTILITIES_H


#import <Foundation/Foundation.h>


@interface _CDErrorUtilities : NSObject



+(BOOL)isCoreDataFatalError:(id)arg0 ;
+(BOOL)isCoreDataTemporaryError:(id)arg0 ;
+(id)transformErrorForNSSecureCoding:(id)arg0 ;
+(void)simulateCrashWithDescription:(id)arg0 ;


@end


#endif