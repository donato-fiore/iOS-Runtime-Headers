// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXPROGRESSHINT_H
#define IXPROGRESSHINT_H

@class NSNumber, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IXProgressHint : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *compressedAppAssetSizeInBytes; // ivar: _compressedAppAssetSizeInBytes
@property (retain, nonatomic) NSNumber *filesInAppAssetCount; // ivar: _filesInAppAssetCount
@property (readonly, nonatomic) NSNumber *installingPhaseProportion; // ivar: _installingPhaseProportion
@property (readonly, nonatomic) NSNumber *loadingPhaseProportion; // ivar: _loadingPhaseProportion
@property (readonly, nonatomic) NSNumber *postProcessingPhaseProportion; // ivar: _postProcessingPhaseProportion
@property (readonly, copy, nonatomic) NSDictionary *progressProportionsDictionaryForLaunchServices;
@property (retain, nonatomic) NSNumber *totalExpectedEssentialAssetSizeInBytes; // ivar: _totalExpectedEssentialAssetSizeInBytes
@property (retain, nonatomic) NSNumber *totalODRAssetSizeInBytes; // ivar: _totalODRAssetSizeInBytes
@property (retain, nonatomic) NSNumber *uncompressedAppAssetSizeInBytes; // ivar: _uncompressedAppAssetSizeInBytes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setPhaseProportionsForLoadingPhase:(id)arg0 installingPhase:(id)arg1 postProcessingPhase:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif