// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPFLATTENEDPACKAGESANDBOXINGURLWRAPPER_H
#define FPFLATTENEDPACKAGESANDBOXINGURLWRAPPER_H



#import "FPSandboxingURLWrapper.h"

@interface FPFlattenedPackageSandboxingURLWrapper : FPSandboxingURLWrapper {
    FPSandboxingURLWrapper *_packageWrapper;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 packageURL:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif