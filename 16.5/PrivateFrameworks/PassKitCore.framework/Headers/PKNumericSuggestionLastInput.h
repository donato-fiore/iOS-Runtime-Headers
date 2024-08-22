// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKNUMERICSUGGESTIONLASTINPUT_H
#define PKNUMERICSUGGESTIONLASTINPUT_H

@class NSString, NSMutableDictionary, NSDecimalNumber;

#import <Foundation/Foundation.h>


@interface PKNumericSuggestionLastInput : NSObject {
    NSString *_serialNumber;
    NSMutableDictionary *_passLastInputDictionary;
}


@property (copy, nonatomic) NSDecimalNumber *value;
@property (nonatomic) BOOL wentToMax;


-(id)init;
-(id)initWithPassSerialNumber:(id)arg0 ;
-(void)save;


@end


#endif