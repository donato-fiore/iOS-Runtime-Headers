// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDSELECTORCONTROL_H
#define ASDSELECTORCONTROL_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "ASDControl.h"

@interface ASDSelectorControl : ASDControl {
    unsigned int _selectedValue;
    NSMutableArray *_values;
    NSObject<OS_dispatch_queue> *_valueQueue;
}


@property (nonatomic) unsigned int selectedValue;
@property (readonly, nonatomic, getter=isSettable) BOOL settable; // ivar: _settable


-(BOOL)changeValue:(unsigned int)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 andObjectClassID:(unsigned int)arg3 ;
-(id)initWithIsSettable:(BOOL)arg0 forElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 ;
-(id)initWithIsSettable:(BOOL)arg0 forElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4 ;
-(id)initWithIsSettable:(BOOL)arg0 withPlugin:(id)arg1 ;
-(id)nameForValue:(unsigned int)arg0 ;
-(id)values;
-(unsigned int)baseClass;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(void)addValue:(id)arg0 ;
-(void)removeValue:(id)arg0 ;


@end


#endif