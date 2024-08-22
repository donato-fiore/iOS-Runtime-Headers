// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGVALUE_H
#define HMSETTINGVALUE_H

@class NSData, NSNumber, NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (readonly, copy, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (readonly, copy, nonatomic) NSUUID *selectionIdentifier; // ivar: _selectionIdentifier
@property (readonly, copy, nonatomic) NSString *selectionValue; // ivar: _selectionValue
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDataSettingWithValue:(id)arg0 ;
-(id)initNumberSettingWithValue:(id)arg0 ;
-(id)initStringSettingWithValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 numberValue:(id)arg2 dataValue:(id)arg3 selectionIdentifier:(id)arg4 selectionValue:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif