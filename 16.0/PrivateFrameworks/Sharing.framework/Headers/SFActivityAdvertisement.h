// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACTIVITYADVERTISEMENT_H
#define SFACTIVITYADVERTISEMENT_H

@class NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFPeerDevice.h"

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>



@property (readonly, copy) NSData *advertisementPayload; // ivar: _advertisementPayload
@property (readonly) NSInteger advertisementVersion; // ivar: _advertisementVersion
@property (readonly, retain) SFPeerDevice *device; // ivar: _device
@property (readonly, copy) NSDictionary *options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAdvertisementVersion:(NSUInteger)arg0 advertisementPayload:(id)arg1 options:(id)arg2 device:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif