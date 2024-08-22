// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DGLHANDLE_H
#define TSCH3DGLHANDLE_H



#import "TSCH3DResourceHandle.h"

@interface TSCH3DGLHandle : TSCH3DResourceHandle

@property (readonly, nonatomic) unsigned int value; // ivar: _value


+(id)handleWithGLHandle:(unsigned int)arg0 ;
-(id)description;
-(id)initWithGLHandle:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif