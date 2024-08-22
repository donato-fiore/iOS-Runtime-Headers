// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDBOOLEANCONTROL_H
#define ASDBOOLEANCONTROL_H

@protocol OS_dispatch_queue;


#import "ASDControl.h"

@interface ASDBooleanControl : ASDControl {
    BOOL _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
}


@property (readonly, nonatomic, getter=isSettable) BOOL settable; // ivar: _settable
@property (nonatomic) BOOL value;


+(id)invertControlWithValue:(BOOL)arg0 isSettable:(BOOL)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 ;
+(id)jackControlWithValue:(BOOL)arg0 isSettable:(BOOL)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 ;
+(id)muteControlWithValue:(BOOL)arg0 isSettable:(BOOL)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 ;
+(id)phantomPowerControlWithValue:(BOOL)arg0 isSettable:(BOOL)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 ;
-(BOOL)changeValue:(BOOL)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 andObjectClassID:(unsigned int)arg3 ;
-(id)initWithPlugin:(id)arg0 ;
-(id)initWithValue:(BOOL)arg0 isSettable:(BOOL)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 ;
-(id)initWithValue:(BOOL)arg0 isSettable:(BOOL)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 andObjectClassID:(unsigned int)arg5 ;
-(unsigned int)baseClass;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;


@end


#endif