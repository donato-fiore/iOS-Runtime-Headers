// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPUNIVERSALSEARCHSPOTLIGHTFEEDBACK_H
#define PPUNIVERSALSEARCHSPOTLIGHTFEEDBACK_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPUniversalSearchSpotlightFeedback : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *clientBundleId; // ivar: _clientBundleId
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) unsigned int engagedCSSICount; // ivar: _engagedCSSICount
@property (readonly, nonatomic) unsigned int offeredCSSICount; // ivar: _offeredCSSICount
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPPUniversalSearchSpotlightFeedback:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOfferedCSSICount:(unsigned int)arg0 engagedCSSICount:(unsigned int)arg1 ;
-(id)initWithOfferedCSSICount:(unsigned int)arg0 engagedCSSICount:(unsigned int)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif