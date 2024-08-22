// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIOMODELPACKAGE_H
#define MIOMODELPACKAGE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface MIOModelPackage : NSObject

@property (copy, nonatomic) NSURL *specificationURL; // ivar: _specificationURL


+(BOOL)_upgradeModelSpecificationAtURL:(id)arg0 packageURL:(id)arg1 error:(*id)arg2 ;
+(id)upgradeModelSpecificationAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(id)initWithModelPackageAtURL:(id)arg0 error:(*id)arg1 ;


@end


#endif