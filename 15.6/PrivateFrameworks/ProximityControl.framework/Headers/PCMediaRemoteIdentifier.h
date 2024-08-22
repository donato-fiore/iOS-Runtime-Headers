// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCMEDIAREMOTEIDENTIFIER_H
#define PCMEDIAREMOTEIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding;


#import "PCDeviceIdentifier.h"

@interface PCMediaRemoteIdentifier : PCDeviceIdentifier <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *mediaRemoteID; // ivar: _mediaRemoteID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif