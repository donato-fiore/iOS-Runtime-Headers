// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBPROTECTION_H
#define EBPROTECTION_H


#import <Foundation/Foundation.h>


@interface EBProtection : NSObject



+(id)edProtectionFromXlDXfProtect:(struct XlDXfProtect *)arg0 ;
+(id)edProtectionFromXlGraphicsInfo:(*void)arg0 ;
+(id)edProtectionFromXlXf:(struct XlXf *)arg0 ;
+(struct XlDXfProtect *)xlDXfProtectFromEDProtection:(id)arg0 ;
+(void)writeProtection:(id)arg0 toXlGraphicsInfo:(*void)arg1 ;
+(void)writeProtection:(id)arg0 toXlXf:(struct XlXf *)arg1 ;


@end


#endif