// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESDOBJECT_H
#define ESDOBJECT_H


#import <Foundation/Foundation.h>

#import "ESDContainer.h"

@interface ESDObject : NSObject {
    *EshObject mEshObject;
    ESDContainer *mParent;
    BOOL mIsChart;
}




-(*void)eshGroup;
-(*void)eshShape;
-(BOOL)isChart;
-(id)initForExcelBinaryWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(id)arg2 ;
-(id)initFromReader:(struct OcReader *)arg0 type:(unsigned short)arg1 version:(unsigned short)arg2 ;
-(id)initPBWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(id)arg2 ;
-(id)initWithEshObject:(struct EshObject *)arg0 ;
-(id)initWithType:(unsigned short)arg0 ;
-(id)parent;
-(int)shapeID;
-(struct EshObject *)eshObject;
-(void)dealloc;
-(void)setChart:(BOOL)arg0 ;
-(void)writeToWriter:(struct OcWriter *)arg0 ;


@end


#endif