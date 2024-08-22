// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTDATAUSAGEPOLICIES_H
#define CTDATAUSAGEPOLICIES_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger cellular; // ivar: _cellular
@property (nonatomic) NSInteger wifi; // ivar: _wifi


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init:(id)arg0 withCellularPolicy:(NSInteger)arg1 andWifiPolicy:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif