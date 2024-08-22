// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKATTRIBUTEVALUE_H
#define SKATTRIBUTEVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKAttributeValue : NSObject <NSSecureCoding>

 {
    float floatValues;
    unsigned short halfFloatValues;
}


@property (nonatomic) float floatValue;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property ? vectorFloat2Value;
@property ? vectorFloat3Value;
@property ? vectorFloat4Value;


+(id)valueWithFloat:(float)arg0 ;
+(id)valueWithVectorFloat2;
+(id)valueWithVectorFloat3;
+(id)valueWithVectorFloat4;
-(BOOL)copyValueTo:(*void)arg0 type:(NSInteger)arg1 count:(unsigned int)arg2 ;
-(BOOL)isEqualToAttributeValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif