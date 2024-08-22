// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPURGEABLEAPP_H
#define ASDPURGEABLEAPP_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *purgeableReason; // ivar: _purgeableReason
@property (nonatomic) NSInteger purgeableType; // ivar: _purgeableType
@property (nonatomic) NSInteger staticDiskUsage; // ivar: _staticDiskUsage
@property (copy, nonatomic) NSNumber *storeItemID; // ivar: _storeItemID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diagnosticDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif