// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCACHEINVALIDATIONDATA_H
#define GEOCACHEINVALIDATIONDATA_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOCacheInvalidationData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) CGFloat ttl; // ivar: _ttl
@property (readonly, nonatomic) unsigned int version; // ivar: _version
@property (readonly, nonatomic) NSArray *versionDomains; // ivar: _versionDomains


+(BOOL)supportsSecureCoding;
-(BOOL)_isKey:(id)arg0 subsetOf:(id)arg1 ;
-(BOOL)isInvalidatedByServiceVersion:(unsigned int)arg0 domains:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 ttl:(CGFloat)arg1 version:(unsigned int)arg2 domains:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif