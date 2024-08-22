// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUGENERICADJUSTMENT_H
#define NUGENERICADJUSTMENT_H

@class NSMutableDictionary, NSDictionary;


#import "NUAdjustment.h"

@interface NUGenericAdjustment : NUAdjustment {
    NSMutableDictionary *_settings;
}


@property (copy, nonatomic) NSDictionary *settings;


-(id)initWithAdjustmentSchema:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif