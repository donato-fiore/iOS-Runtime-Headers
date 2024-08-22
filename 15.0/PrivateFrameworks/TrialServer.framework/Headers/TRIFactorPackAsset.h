// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFACTORPACKASSET_H
#define TRIFACTORPACKASSET_H

@class NSString<TRIAssetId>, NSString, NSString<TRIFactorPackId>;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFactorPackAsset : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIAssetId> *assetId; // ivar: _assetId
@property (readonly, nonatomic) NSString *factorName; // ivar: _factorName
@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId; // ivar: _factorPackId
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath


+(id)assetWithFactorName:(id)arg0 assetId:(id)arg1 filePath:(id)arg2 factorPackId:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementAssetId:(id)arg0 ;
-(id)copyWithReplacementFactorName:(id)arg0 ;
-(id)copyWithReplacementFactorPackId:(id)arg0 ;
-(id)copyWithReplacementFilePath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFactorName:(id)arg0 assetId:(id)arg1 filePath:(id)arg2 factorPackId:(id)arg3 ;


@end


#endif