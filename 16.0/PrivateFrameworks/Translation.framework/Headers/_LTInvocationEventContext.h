// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTINVOCATIONEVENTCONTEXT_H
#define _LTINVOCATIONEVENTCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTInvocationEventContext : NSObject

@property (retain, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (nonatomic) BOOL explicitLanguageFilterEnabled; // ivar: _explicitLanguageFilterEnabled
@property (nonatomic) NSInteger inputMode; // ivar: _inputMode
@property (nonatomic) BOOL isOnDevice; // ivar: _isOnDevice
@property (nonatomic) BOOL languageIDEnabled; // ivar: _languageIDEnabled
@property (retain, nonatomic) _LTLocalePair *languagePair; // ivar: _languagePair
@property (nonatomic) NSInteger task; // ivar: _task
@property (nonatomic) NSInteger uiMode; // ivar: _uiMode


-(id)init;
-(id)locales;
-(id)logCancelledWithReason:(id)arg0 ;
-(id)logEnded;
-(id)logFailedWithError:(id)arg0 ;
-(id)logStartedOrChanged;


@end


#endif