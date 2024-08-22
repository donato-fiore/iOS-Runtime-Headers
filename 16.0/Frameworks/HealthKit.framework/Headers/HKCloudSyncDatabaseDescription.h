// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLOUDSYNCDATABASEDESCRIPTION_H
#define HKCLOUDSYNCDATABASEDESCRIPTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCloudSyncDatabaseDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *scope; // ivar: _scope
@property (readonly, copy, nonatomic) NSArray *zoneDescriptions; // ivar: _zoneDescriptions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScope:(id)arg0 zoneDescriptions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif