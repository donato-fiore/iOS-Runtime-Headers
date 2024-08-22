// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSCLAIMBINDING_H
#define LSCLAIMBINDING_H

@protocol NSSecureCoding, NSCopying, LSDetachable;

#import <Foundation/Foundation.h>

#import "LSBundleRecord.h"
#import "LSClaimRecord.h"
#import "UTTypeRecord.h"

@interface LSClaimBinding : NSObject <NSSecureCoding, NSCopying, LSDetachable>



@property (readonly) LSBundleRecord *bundleRecord; // ivar: _bundleRecord
@property (readonly) LSClaimRecord *claimRecord; // ivar: _claimRecord
@property (readonly) UTTypeRecord *typeRecord; // ivar: _typeRecord


+(BOOL)supportsSecureCoding;
+(id)_claimBindingsForBindingEvaluator:(*void)arg0 error:(*id)arg1 ;
+(id)claimBindingsWithConfiguration:(id)arg0 error:(*id)arg1 ;
+(id)claimBindingsWithTypeIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)claimBindingsWithURL:(id)arg0 error:(*id)arg1 ;
+(id)new;
-(?)_initWithContext:(?)arg0 binding:(?)arg1 coreTypesBundleRecord:(?)arg2 typeRecorderror;
-(id)_initWithBindingEvaluator:(*void)arg0 error:(*id)arg1 ;
-(id)_initWithClaimRecord:(id)arg0 typeRecord:(id)arg1 bundleRecord:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif