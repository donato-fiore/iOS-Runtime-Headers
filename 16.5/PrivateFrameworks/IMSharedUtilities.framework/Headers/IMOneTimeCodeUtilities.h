// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMONETIMECODEUTILITIES_H
#define IMONETIMECODEUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMOneTimeCodeUtilities : NSObject



-(BOOL)isValidOneTimeCode:(id)arg0 ;
-(id)createOTCFromMessageBody:(id)arg0 sender:(id)arg1 guid:(id)arg2 ;


@end


#endif