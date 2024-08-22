// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTDATAUSAGEPOLICIES_H
#define CTDATAUSAGEPOLICIES_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger cellular; // ivar: _cellular
@property (nonatomic) BOOL isManaged; // ivar: _isManaged
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (nonatomic) NSInteger wifi; // ivar: _wifi


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init:(id)arg0 withCellularPolicy:(NSInteger)arg1 andWifiPolicy:(NSInteger)arg2 ;
-(id)init:(id)arg0 withCellularPolicy:(NSInteger)arg1 wifiPolicy:(NSInteger)arg2 isManaged:(BOOL)arg3 andIsRestricted:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif