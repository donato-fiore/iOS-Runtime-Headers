// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATAORIGINPROVENANCE_H
#define HDDATAORIGINPROVENANCE_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HDContributorReference.h"

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) HDContributorReference *contributorReference; // ivar: _contributorReference
@property (retain, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (copy, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSNumber *sourceID; // ivar: _sourceID
@property (copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (nonatomic) NSInteger syncProvenance; // ivar: _syncProvenance
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (copy, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName


+(BOOL)supportsSecureCoding;
+(id)dataProvenanceWithSyncProvenance:(NSInteger)arg0 productType:(id)arg1 systemBuild:(id)arg2 operatingSystemVersion:(struct ? )arg3 sourceVersion:(id)arg4 timeZoneName:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7 contributorReference:(id)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif