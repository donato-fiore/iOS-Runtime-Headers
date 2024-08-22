// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLSINFINFO_H
#define ICLSINFINFO_H

@class NSNumber, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ICLSinfInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSNumber *applicationDSID; // ivar: _applicationDSID
@property (copy, nonatomic) NSNumber *downloaderDSID; // ivar: _downloaderDSID
@property (copy, nonatomic) NSNumber *familyID; // ivar: _familyID
@property (nonatomic) BOOL hasMIDBasedSINF; // ivar: _hasMIDBasedSINF
@property (nonatomic) BOOL isMissingRequiredSINF; // ivar: _isMissingRequiredSINF
@property (readonly, copy, nonatomic) NSDictionary *legacySinfInfoDictionary;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacySinfInfoDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif