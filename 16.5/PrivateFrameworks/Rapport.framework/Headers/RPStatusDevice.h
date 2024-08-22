// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPSTATUSDEVICE_H
#define RPSTATUSDEVICE_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RPCompanionLinkDevice.h"

@interface RPStatusDevice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) RPCompanionLinkDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableDictionary *statusInfoMap; // ivar: _statusInfoMap
@property (retain, nonatomic) NSMutableDictionary *statusStateMap; // ivar: _statusStateMap


+(BOOL)supportsSecureCoding;
-(id)getIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif