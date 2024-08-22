// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPREMOTEDISPLAYDEVICE_H
#define RPREMOTEDISPLAYDEVICE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;


#import "RPEndpoint.h"

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>



@property (copy) NSDictionary *cameraCapabilities; // ivar: _cameraCapabilities
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)updateWithEndpoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif