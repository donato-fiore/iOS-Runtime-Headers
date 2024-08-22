// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERNETWORKINFO_H
#define MTRNETWORKCOMMISSIONINGCLUSTERNETWORKINFO_H

@class NSNumber, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterNetworkInfo : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *connected; // ivar: _connected
@property (copy, nonatomic) NSData *networkID; // ivar: _networkID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif