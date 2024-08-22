// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDIDSPARTICIPANT_H
#define HDIDSPARTICIPANT_H

@class NSString, IDSDevice;

#import <Foundation/Foundation.h>


@interface HDIDSParticipant : NSObject

@property (readonly, copy, nonatomic) NSString *destinationIdentifier; // ivar: _destinationIdentifier
@property (readonly, nonatomic) IDSDevice *device; // ivar: _device
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier


-(id)description;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif