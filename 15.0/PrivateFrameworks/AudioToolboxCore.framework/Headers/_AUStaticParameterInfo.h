// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AUSTATICPARAMETERINFO_H
#define _AUSTATICPARAMETERINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _AUStaticParameterInfo : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int clumpID; // ivar: _clumpID
@property (nonatomic) float defaultValue; // ivar: _defaultValue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) float maxValue; // ivar: _maxValue
@property (nonatomic) float minValue; // ivar: _minValue
@property (nonatomic) unsigned int originalOrder; // ivar: _originalOrder
@property (nonatomic) unsigned int unit; // ivar: _unit
@property (retain, nonatomic) NSString *unitName; // ivar: _unitName
@property (retain, nonatomic) NSArray *valueStrings; // ivar: _valueStrings


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif