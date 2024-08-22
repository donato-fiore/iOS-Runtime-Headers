// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGMODELPOSE_H
#define VGMODELPOSE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGModelPose : NSObject <NSSecureCoding>



@property (nonatomic) ? modelPose; // ivar: _modelPose


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif