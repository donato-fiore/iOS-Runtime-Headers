// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESEMANTICSTYLE_H
#define FIGCAPTURESEMANTICSTYLE_H

@class NSString;
@protocol FigXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigCaptureSemanticStyle : NSObject <FigXPCCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash; // ivar: _hash
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly, nonatomic) float mappedToneBias; // ivar: _mappedToneBias
@property (readonly, nonatomic) float mappedWarmthBias; // ivar: _mappedWarmthBias
@property (readonly) Class superclass;
@property (readonly, nonatomic) float toneBias; // ivar: _toneBias
@property (readonly, nonatomic) float warmthBias; // ivar: _warmthBias


+(BOOL)supportsSecureCoding;
+(id)identityStyle;
+(id)semanticStyleWithToneBias:(float)arg0 warmthBias:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif