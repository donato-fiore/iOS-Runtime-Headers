// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDAPPCLUSTERMAPPING_H
#define ASDAPPCLUSTERMAPPING_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSNumber *clusterID; // ivar: _clusterID
@property (copy, nonatomic) NSNumber *clusterVersion; // ivar: _clusterVersion
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSNumber *launchesWeight; // ivar: _launchesWeight
@property (copy, nonatomic) NSNumber *usageWeight; // ivar: _usageWeight


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif