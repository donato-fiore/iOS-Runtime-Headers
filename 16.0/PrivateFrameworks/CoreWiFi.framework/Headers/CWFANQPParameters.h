// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFANQPPARAMETERS_H
#define CWFANQPPARAMETERS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *ANQPElementIDList; // ivar: _ANQPElementIDList
@property (nonatomic) BOOL cacheOnly; // ivar: _cacheOnly
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles; // ivar: _includeMatchingKnownNetworkProfiles
@property (nonatomic) NSUInteger maximumCacheAge; // ivar: _maximumCacheAge
@property (copy, nonatomic) NSArray *scanResults; // ivar: _scanResults


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToANQPParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif