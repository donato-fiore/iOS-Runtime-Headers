// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUPARAMETER_H
#define AUPARAMETER_H

@class NSArray, NSString;
@protocol NSSecureCoding;


#import "AUParameterNode.h"
#import "_AUStaticParameterInfo.h"

@interface AUParameter : AUParameterNode <NSSecureCoding>

 {
    atomic<bool> _localValueStale;
    atomic<int> _numUIObservers;
    atomic<int> _numRecordingObservers;
}


@property (nonatomic) NSUInteger address; // ivar: _address
@property (readonly, copy, nonatomic) NSArray *dependentParameters; // ivar: _dependentParameters
@property (readonly, nonatomic) unsigned int flags;
@property (retain, nonatomic) _AUStaticParameterInfo *info; // ivar: _info
@property (readonly, nonatomic) float maxValue;
@property (readonly, nonatomic) float minValue;
@property (readonly, nonatomic) unsigned int unit;
@property (readonly, copy, nonatomic) NSString *unitName;
@property (nonatomic) float value; // ivar: _value
@property (readonly, copy, nonatomic) NSArray *valueStrings;


+(BOOL)supportsSecureCoding;
-(BOOL)localValueStale;
-(float)_defaultValue;
-(float)_internalValue;
-(float)valueFromString:(id)arg0 ;
-(id)copyNodeWithOffset:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 name:(id)arg1 address:(NSUInteger)arg2 min:(float)arg3 max:(float)arg4 unit:(unsigned int)arg5 unitName:(id)arg6 flags:(unsigned int)arg7 valueStrings:(id)arg8 dependentParameters:(id)arg9 ;
-(id)stringFromValue:(*float)arg0 ;
-(unsigned int)_clumpID;
-(unsigned int)_originalOrder;
-(void)_observersChanged:(BOOL)arg0 deltaCount:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLocalValueStale:(BOOL)arg0 ;
-(void)set_clumpID:(unsigned int)arg0 ;
-(void)set_defaultValue:(float)arg0 ;
-(void)set_originalOrder:(unsigned int)arg0 ;


@end


#endif