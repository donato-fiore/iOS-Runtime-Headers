// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLIVERENDEREDSHADERSET_H
#define PKLIVERENDEREDSHADERSET_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *fragmentEntryPointShader; // ivar: _fragmentEntryPointShader
@property (readonly, copy, nonatomic) NSString *geometryEntryPointShader; // ivar: _geometryEntryPointShader
@property (readonly, copy, nonatomic) NSString *lightingModelEntryPointShader; // ivar: _lightingModelEntryPointShader
@property (readonly, copy, nonatomic) NSString *surfaceEntryPointShader; // ivar: _surfaceEntryPointShader


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataAccessor:(id)arg0 suffix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif