// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCOMPOUNDLOCALIZABLESTRINGKEY_H
#define HFCOMPOUNDLOCALIZABLESTRINGKEY_H

@class NSString, NSMutableArray;


#import "HFLocalizableStringKey.h"

@interface HFCompoundLocalizableStringKey : HFLocalizableStringKey

@property (retain, nonatomic) NSString *format; // ivar: _format
@property (readonly, nonatomic) NSMutableArray *localizableStrings; // ivar: _localizableStrings


-(id)initWithFormat:(id)arg0 localizableStrings:(id)arg1 ;
-(id)localizedStringWithArgumentBlock:(id)arg0 ;


@end


#endif