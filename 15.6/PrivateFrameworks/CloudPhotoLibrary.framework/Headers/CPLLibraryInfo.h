// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLLIBRARYINFO_H
#define CPLLIBRARYINFO_H

@class NSData, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CPLAccountFlags.h"
#import "CPLFeatureVersionHistory.h"
#import "CPLMomentShare.h"

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (copy, nonatomic) NSData *accountFlagsData; // ivar: _accountFlagsData
@property (copy, nonatomic) NSDictionary *assetCounts; // ivar: _assetCounts
@property (copy, nonatomic) NSNumber *featureCompatibleVersion; // ivar: _featureCompatibleVersion
@property (retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // ivar: _featureVersionHistory
@property (retain, nonatomic) CPLMomentShare *momentShare; // ivar: _momentShare


+(BOOL)supportsSecureCoding;
+(id)cplAdditionalSecureClassesForProperty:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)prettyDescriptionWithAnchorDesciptionBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif