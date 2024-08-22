// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDSLIDERCONTROL_H
#define ASDSLIDERCONTROL_H

@protocol OS_dispatch_queue;


#import "ASDControl.h"

@interface ASDSliderControl : ASDControl {
    unsigned int _value;
    _ASDSliderRange _range;
    NSObject<OS_dispatch_queue> *_valueQueue;
}


@property (nonatomic) _ASDSliderRange range;
@property (readonly, nonatomic, getter=isSettable) BOOL settable; // ivar: _settable
@property (nonatomic) unsigned int value;


+(id)sliderControlWithValue:(unsigned int)arg0 andRange:(struct _ASDSliderRange )arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5 ;
-(BOOL)changeValue:(unsigned int)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 andObjectClassID:(unsigned int)arg3 ;
-(id)initWithPlugin:(id)arg0 ;
-(id)initWithValue:(unsigned int)arg0 andRange:(struct _ASDSliderRange )arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5 ;
-(id)initWithValue:(unsigned int)arg0 andRange:(struct _ASDSliderRange )arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned int)arg6 ;
-(unsigned int)baseClass;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;


@end


#endif