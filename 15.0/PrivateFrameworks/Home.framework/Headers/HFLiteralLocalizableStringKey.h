// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFLITERALLOCALIZABLESTRINGKEY_H
#define HFLITERALLOCALIZABLESTRINGKEY_H

@class NSString;


#import "HFLocalizableStringKey.h"

@interface HFLiteralLocalizableStringKey : HFLocalizableStringKey

@property (readonly, nonatomic) NSString *localizedString; // ivar: _localizedString


-(id)initWithLocalizedString:(id)arg0 ;
-(id)localizedStringWithArgumentBlock:(id)arg0 ;


@end


#endif