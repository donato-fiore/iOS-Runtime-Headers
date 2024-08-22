// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIASSETIDFACTORNAME_H
#define TRIASSETIDFACTORNAME_H

@class NSString<TRIAssetId>, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIAssetIdFactorName : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIAssetId> *assetId; // ivar: _assetId
@property (readonly, nonatomic) NSString *factorName; // ivar: _factorName


+(id)nameWithAssetId:(id)arg0 factorName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToName:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementAssetId:(id)arg0 ;
-(id)copyWithReplacementFactorName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssetId:(id)arg0 factorName:(id)arg1 ;


@end


#endif