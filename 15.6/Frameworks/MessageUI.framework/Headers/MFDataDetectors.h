// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDATADETECTORS_H
#define MFDATADETECTORS_H


#import <Foundation/Foundation.h>


@interface MFDataDetectors : NSObject



+(BOOL)urlIfyNode:(id)arg0 ;
+(BOOL)urlIfyNode:(id)arg0 phoneNumberTypes:(NSUInteger)arg1 ;
+(Class)_DDURLifierClass;
+(id)sharedDetectionController;
+(id)urlMatchesForString:(id)arg0 ;
+(id)urlMatchesForString:(id)arg0 includingTel:(BOOL)arg1 ;


@end


#endif