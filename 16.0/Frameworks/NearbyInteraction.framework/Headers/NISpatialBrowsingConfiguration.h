// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NISPATIALBROWSINGCONFIGURATION_H
#define NISPATIALBROWSINGCONFIGURATION_H

@class NSString;


#import "NIConfiguration.h"

@interface NISpatialBrowsingConfiguration : NIConfiguration

@property (copy) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property CGFloat maxNearbyObjectAge; // ivar: _maxNearbyObjectAge
@property (getter=isResponder) BOOL responder; // ivar: _responder
@property NSInteger updatesPolicy; // ivar: _updatesPolicy


+(BOOL)supportsSecureCoding;
+(id)new;
+(id)responderConfigurationWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif