// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREMOTEHOTSPOTINFO_H
#define SFREMOTEHOTSPOTINFO_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>



@property (retain) NSNumber *channel; // ivar: _channel
@property (copy) NSString *name; // ivar: _name
@property (copy) NSString *password; // ivar: _password


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 password:(id)arg1 channel:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif