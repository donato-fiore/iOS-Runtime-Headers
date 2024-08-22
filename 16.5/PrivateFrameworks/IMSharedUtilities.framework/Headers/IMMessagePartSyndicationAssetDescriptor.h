// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEPARTSYNDICATIONASSETDESCRIPTOR_H
#define IMMESSAGEPARTSYNDICATIONASSETDESCRIPTOR_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMMessagePartSyndicationAssetDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetSyndications; // ivar: _assetSyndications
@property (readonly, nonatomic) NSString *serializedString; // ivar: _serializedString


+(BOOL)supportsSecureCoding;
+(id)descriptorFromSerializedString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssetSyndications:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)syndicationForPartIndex:(NSUInteger)arg0 asset:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeSyndicationAssetsInfoFor:(NSInteger)arg0 ;
-(void)replaceSyndicationAssetsInfoWith:(id)arg0 asset:(NSInteger)arg1 ;
-(void)updateSyndicationAssetWithInfo:(id)arg0 asset:(NSInteger)arg1 ;


@end


#endif