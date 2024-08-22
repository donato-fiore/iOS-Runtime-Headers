// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LACUSTOMPASSWORDCONTROLLERCONFIGURATION_H
#define LACUSTOMPASSWORDCONTROLLERCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "LACustomPasswordControllerStyle.h"

@interface LACustomPasswordControllerConfiguration : NSObject {
    NSString *_prompt;
    NSString *_verifyPrompt;
    NSUInteger _mode;
}


@property (retain, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (nonatomic) NSInteger passwordType; // ivar: _passwordType
@property (retain, nonatomic) LACustomPasswordControllerStyle *style; // ivar: _style


+(id)enterCustomPasswordConfiguration;
+(id)enterCustomPasswordConfigurationWithPrompt:(id)arg0 ;
+(id)registerCustomPasswordConfiguration;
+(id)registerCustomPasswordControllerConfigurationWithPrompt:(id)arg0 verifyPrompt:(id)arg1 ;
-(NSUInteger)mode;
-(id)prompt;
-(id)verifyPrompt;


@end


#endif