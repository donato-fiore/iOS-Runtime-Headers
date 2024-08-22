// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPERSONWEIGHTFORMATTER_H
#define HKPERSONWEIGHTFORMATTER_H

@class NSMassFormatter;

#import <Foundation/Foundation.h>


@interface HKPersonWeightFormatter : NSObject {
    NSMassFormatter *_massFormatter;
}


@property (readonly, nonatomic) NSInteger localWeightUnit; // ivar: _localWeightUnit


+(id)sharedFormatter;
-(id)init;
-(id)stringFromWeightInKilograms:(id)arg0 ;
-(id)stringFromWeightValue:(CGFloat)arg0 inUnit:(NSInteger)arg1 ;
-(void)_commonInit;
-(void)_localeChanged:(id)arg0 ;
-(void)_updateRoundingIncrement;
-(void)dealloc;


@end


#endif