// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPARTICLEPROPERTYCONTROLLER_H
#define SCNPARTICLEPROPERTYCONTROLLER_H

@class CAAnimation, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SCNNode.h"

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying>

 {
    CAAnimation *_animation;
    NSInteger _inputMode;
    CGFloat _inputScale;
    CGFloat _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
    id *_c3dAnimation;
}


@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) CGFloat inputBias;
@property (nonatomic) NSInteger inputMode;
@property (weak, nonatomic) SCNNode *inputOrigin;
@property (copy, nonatomic) NSString *inputProperty;
@property (nonatomic) CGFloat inputScale;


+(BOOL)supportsSecureCoding;
+(id)controllerWithAnimation:(id)arg0 ;
+(id)particlePropertyControllerWithAnimation:(id)arg0 ;
-(id)c3dAnimation;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_customDecodingOfSCNParticlePropertyController:(id)arg0 ;
-(void)_customEncodingOfSCNParticlePropertyController:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setC3dAnimation:(id)arg0 ;


@end


#endif