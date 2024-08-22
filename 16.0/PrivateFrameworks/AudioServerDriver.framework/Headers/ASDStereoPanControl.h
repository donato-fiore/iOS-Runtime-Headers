// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDSTEREOPANCONTROL_H
#define ASDSTEREOPANCONTROL_H

@protocol OS_dispatch_queue;


#import "ASDControl.h"

@interface ASDStereoPanControl : ASDControl {
    float _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
    unsigned int _leftPanChannel;
    unsigned int _rightPanChannel;
}


@property (nonatomic) unsigned int leftPanChannel;
@property (nonatomic) unsigned int rightPanChannel;
@property (readonly, nonatomic, getter=isSettable) BOOL settable; // ivar: _settable
@property (nonatomic) float value;


-(BOOL)changeValue:(float)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 andObjectClassID:(unsigned int)arg3 ;
-(id)initWithPlugin:(id)arg0 ;
-(id)initWithValue:(float)arg0 leftPanChannel:(unsigned int)arg1 rightPanChannel:(unsigned int)arg2 isSettable:(BOOL)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6 ;
-(id)initWithValue:(float)arg0 leftPanChannel:(unsigned int)arg1 rightPanChannel:(unsigned int)arg2 isSettable:(BOOL)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6 andObjectClassID:(unsigned int)arg7 ;
-(unsigned int)baseClass;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(void)setPanChannel:(unsigned int)arg0 isLeft:(BOOL)arg1 ;


@end


#endif