// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCOLORCOMPONENTS_H
#define MRCOLORCOMPONENTS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRColorProtobuf.h"

@interface MRColorComponents : NSObject <NSCopying>



@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float blue; // ivar: _blue
@property (nonatomic) float green; // ivar: _green
@property (readonly, nonatomic) _MRColorProtobuf *protobuf;
@property (nonatomic) float red; // ivar: _red


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif