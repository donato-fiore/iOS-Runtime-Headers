// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFNUMBERDEPENDENTLOCALIZABLESTRINGKEY_H
#define HFNUMBERDEPENDENTLOCALIZABLESTRINGKEY_H



#import "HFLocalizableStringKey.h"

@interface HFNumberDependentLocalizableStringKey : HFLocalizableStringKey

@property (nonatomic) NSInteger integerArgument; // ivar: _integerArgument


-(id)initWithKey:(id)arg0 ;
-(id)localizedStringWithArgumentBlock:(id)arg0 ;


@end


#endif