// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLAPPRECORD_H
#define ICLAPPRECORD_H

@class NSArray, NSURL;
@protocol NSSecureCoding, NSCopying;


#import "ICLPlaceholderRecord.h"

@interface ICLAppRecord : ICLPlaceholderRecord <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *driverKitExtensionURLs; // ivar: _driverKitExtensionURLs
@property (nonatomic) BOOL isUpdatedSystemApp; // ivar: _isUpdatedSystemApp
@property (copy, nonatomic) NSURL *parallelPlaceholderURL; // ivar: _parallelPlaceholderURL
@property (copy, nonatomic) NSArray *stashedVersions; // ivar: _stashedVersions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyRecordDictionary:(id)arg0 ;
-(id)legacyRecordDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif