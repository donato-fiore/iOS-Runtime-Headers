// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCXSTVALIDATOR_H
#define OCXSTVALIDATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OCXSTValidator : NSObject {
    NSMutableDictionary *_simpleTypeMap;
}




+(BOOL)isValidValue:(id)arg0 simpleType:(NSUInteger)arg1 ;
+(id)simpleType:(NSUInteger)arg0 integerValue:(NSInteger)arg1 ;
+(id)simpleType:(NSUInteger)arg0 stringValue:(id)arg1 ;
+(id)validateIntegerValue:(NSInteger)arg0 minValue:(NSInteger)arg1 maxValue:(NSInteger)arg2 ;
+(id)validator;
-(id)init;
-(id)simpleTypeMap;


@end


#endif