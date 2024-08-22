// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTERMEMBER_H
#define COCLUSTERMEMBER_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface COClusterMember : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *deviceMetadata; // ivar: _deviceMetadata
@property (readonly, nonatomic) NSUInteger memberType; // ivar: _memberType
@property (nonatomic, getter=isStale) BOOL stale; // ivar: _stale


+(BOOL)supportsSecureCoding;
+(id)memberForCurrentDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMember:(id)arg0 ;
-(BOOL)isSameDeviceAsMember:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 deviceMetadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif