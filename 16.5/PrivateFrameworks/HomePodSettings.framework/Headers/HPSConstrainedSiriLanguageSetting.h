// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSCONSTRAINEDSIRILANGUAGESETTING_H
#define HPSCONSTRAINEDSIRILANGUAGESETTING_H

@class NSArray;


#import "HPSSiriLanguageSetting.h"

@interface HPSConstrainedSiriLanguageSetting : HPSSiriLanguageSetting

@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 items:(id)arg1 ;
-(id)initWithKeyPath:(id)arg0 languageValue:(id)arg1 items:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif