// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSDATEFIELD_H
#define PKPASSDATEFIELD_H



#import "PKPassField.h"

@interface PKPassDateField : PKPassField

@property (nonatomic) NSInteger dateStyle; // ivar: _dateStyle
@property (nonatomic) BOOL ignoresTimeZone; // ivar: _ignoresTimeZone
@property (nonatomic) BOOL isRelative; // ivar: _isRelative
@property (nonatomic) NSInteger timeStyle; // ivar: _timeStyle


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)asMutableDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)value;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif