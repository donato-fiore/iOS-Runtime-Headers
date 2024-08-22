// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSCONSTRAINEDSTRINGSETTING_H
#define HPSCONSTRAINEDSTRINGSETTING_H

@class NSArray;


#import "HPSStringSetting.h"

@interface HPSConstrainedStringSetting : HPSStringSetting

@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 stringValue:(id)arg1 items:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif