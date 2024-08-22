// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMFEATUREFLAGSTESTSWIZZLER_H
#define IMFEATUREFLAGSTESTSWIZZLER_H


#import <Foundation/Foundation.h>

#import "IMSwizzledMethod.h"

@interface IMFeatureFlagsTestSwizzler : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) SEL feature; // ivar: _feature
@property (readonly, nonatomic) IMSwizzledMethod *originalMethod; // ivar: _originalMethod
@property (readonly, nonatomic) IMSwizzledMethod *replacementMethod; // ivar: _replacementMethod
@property (readonly, nonatomic, getter=isSwizzled) BOOL swizzled;
@property (readonly, nonatomic) SEL testMethod; // ivar: _testMethod


-(id)initWithFeature:(SEL)arg0 enabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)swizzle;
-(void)unswizzle;


@end


#endif