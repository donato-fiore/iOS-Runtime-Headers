// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUNIFORM_H
#define SKUNIFORM_H

@class NSMutableArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKTexture.h"

@interface SKUniform : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _type;
    SKTexture *_textureValue;
    NSMutableArray *_targetShaders;
    ? _value;
}


@property NSUInteger _seed; // ivar: _seed
@property unsigned long floatMatrix2Value;
@property unsigned long floatMatrix3Value;
@property unsigned long floatMatrix4Value;
@property (nonatomic) float floatValue;
@property unsigned long floatVector2Value;
@property unsigned long floatVector3Value;
@property unsigned long floatVector4Value;
@property (nonatomic) ? matrixFloat2x2Value;
@property (nonatomic) ? matrixFloat3x3Value;
@property (nonatomic) ? matrixFloat4x4Value;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) SKTexture *textureValue;
@property (readonly, nonatomic) NSInteger uniformType;
@property ? vectorFloat2Value;
@property ? vectorFloat3Value;
@property ? vectorFloat4Value;


+(id)uniformWithName:(id)arg0 ;
+(id)uniformWithName:(id)arg0 float:(float)arg1 ;
+(id)uniformWithName:(id)arg0 floatMatrix2:(unsigned long)arg1 ;
+(id)uniformWithName:(id)arg0 floatMatrix3:(unsigned long)arg1 ;
+(id)uniformWithName:(id)arg0 floatMatrix4:(unsigned long)arg1 ;
+(id)uniformWithName:(id)arg0 floatVector2:(unsigned long)arg1 ;
+(id)uniformWithName:(id)arg0 floatVector3:(unsigned long)arg1 ;
+(id)uniformWithName:(id)arg0 floatVector4:(unsigned long)arg1 ;
+(id)uniformWithName:(id)arg0 matrixFloat2x2:(struct ? )arg1 ;
+(id)uniformWithName:(id)arg0 matrixFloat3x3:(struct ? )arg1 ;
+(id)uniformWithName:(id)arg0 matrixFloat4x4:(struct ? )arg1 ;
+(id)uniformWithName:(id)arg0 texture:(id)arg1 ;
+(id)uniformWithName:(id)arg0 vectorFloat2;
+(id)uniformWithName:(id)arg0 vectorFloat3;
+(id)uniformWithName:(id)arg0 vectorFloat4;
-(BOOL)isEqualToUniform:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 float:(float)arg1 ;
-(id)initWithName:(id)arg0 floatMatrix2:(unsigned long)arg1 ;
-(id)initWithName:(id)arg0 floatMatrix3:(unsigned long)arg1 ;
-(id)initWithName:(id)arg0 floatMatrix4:(unsigned long)arg1 ;
-(id)initWithName:(id)arg0 floatVector2:(unsigned long)arg1 ;
-(id)initWithName:(id)arg0 floatVector3:(unsigned long)arg1 ;
-(id)initWithName:(id)arg0 floatVector4:(unsigned long)arg1 ;
-(id)initWithName:(id)arg0 matrixFloat2x2:(struct ? )arg1 ;
-(id)initWithName:(id)arg0 matrixFloat3x3:(struct ? )arg1 ;
-(id)initWithName:(id)arg0 matrixFloat4x4:(struct ? )arg1 ;
-(id)initWithName:(id)arg0 texture:(id)arg1 ;
-(id)initWithName:(id)arg0 vectorFloat2;
-(id)initWithName:(id)arg0 vectorFloat3;
-(id)initWithName:(id)arg0 vectorFloat4;
-(void)_addTargetShader:(id)arg0 ;
-(void)_removeTargetShader:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif