// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDLEVELCONTROL_H
#define ASDLEVELCONTROL_H

@protocol OS_dispatch_queue;


#import "ASDControl.h"

@interface ASDLevelControl : ASDControl {
    float _decibelValue;
    float _minimumDecibelValue;
    float _maximumDecibelValue;
    NSObject<OS_dispatch_queue> *_valueQueue;
}


@property (nonatomic) float decibelValue;
@property (nonatomic) float maximumDecibelValue;
@property (nonatomic) float minimumDecibelValue;
@property (nonatomic) float scalarValue;
@property (readonly, nonatomic, getter=isSettable) BOOL settable; // ivar: _settable


+(id)volumeControlWithDecibelValue:(float)arg0 minimumValue:(float)arg1 maximumValue:(float)arg2 isSettable:(BOOL)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6 ;
-(BOOL)changeDecibelValue:(float)arg0 ;
-(BOOL)changeScalarValue:(float)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(float)_decibelFromScalar:(float)arg0 ;
-(float)_scalarFromDecibel:(float)arg0 ;
-(float)decibelFromScalar:(float)arg0 ;
-(float)scalarFromDecibel:(float)arg0 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithDecibelValue:(float)arg0 minimumValue:(float)arg1 maximumValue:(float)arg2 isSettable:(BOOL)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6 ;
-(id)initWithDecibelValue:(float)arg0 minimumValue:(float)arg1 maximumValue:(float)arg2 isSettable:(BOOL)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6 andObjectClassID:(unsigned int)arg7 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 andObjectClassID:(unsigned int)arg3 ;
-(id)initWithPlugin:(id)arg0 ;
-(unsigned int)baseClass;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;


@end


#endif