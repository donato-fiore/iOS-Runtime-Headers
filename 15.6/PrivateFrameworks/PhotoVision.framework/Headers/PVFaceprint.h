// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVFACEPRINT_H
#define PVFACEPRINT_H

@class NSData;


#import "PVObject.h"

@interface PVFaceprint : PVObject

@property (retain, nonatomic) NSData *faceprintData; // ivar: _faceprintData
@property (nonatomic) unsigned int faceprintVersion; // ivar: _faceprintVersion


+(id)faceprintWithFaceprintData:(id)arg0 faceprintVersion:(unsigned int)arg1 ;
-(BOOL)getDistance:(*float)arg0 toOtherFaceprint:(id)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)_setPropertiesFrom:(id)arg0 ;


@end


#endif