// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADCHANGETRACKINGCLIENTID_H
#define CADCHANGETRACKINGCLIENTID_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *customClientId; // ivar: _customClientId
@property (readonly, nonatomic) BOOL hasCustomClientId;
@property (readonly, nonatomic) NSString *suffix; // ivar: _suffix


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChangeTrackingClientId:(id)arg0 ;
-(id)clientId;
-(id)clientIdWithBundleId:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomClientId:(id)arg0 ;
-(id)initWithSuffix:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif