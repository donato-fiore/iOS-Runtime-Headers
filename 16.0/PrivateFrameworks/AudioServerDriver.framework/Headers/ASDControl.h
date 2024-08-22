// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDCONTROL_H
#define ASDCONTROL_H



#import "ASDObject.h"

@interface ASDControl : ASDObject {
    unsigned int _objectClassID;
}


@property (nonatomic) unsigned int controlElement; // ivar: _controlElement
@property (nonatomic) unsigned int controlScope; // ivar: _controlScope


-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isKindOfAudioClass:(unsigned int)arg0 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 ;
-(id)initWithElement:(unsigned int)arg0 inScope:(unsigned int)arg1 withPlugin:(id)arg2 andObjectClassID:(unsigned int)arg3 ;
-(id)initWithPlugin:(id)arg0 ;
-(unsigned int)baseClass;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(unsigned int)objectClass;


@end


#endif