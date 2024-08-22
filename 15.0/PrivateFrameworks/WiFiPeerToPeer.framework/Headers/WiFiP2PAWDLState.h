// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIP2PAWDLSTATE_H
#define WIFIP2PAWDLSTATE_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *channelSequence; // ivar: _channelSequence
@property (readonly, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, nonatomic) BOOL supportsSoloMode; // ivar: _supportsSoloMode


+(BOOL)supportsSecureCoding;
+(id)currentState;
+(id)empty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterfaceName:(id)arg0 supportsSoloMode:(BOOL)arg1 channelSequence:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif