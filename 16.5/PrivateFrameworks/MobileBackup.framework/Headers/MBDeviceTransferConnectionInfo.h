// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBDEVICETRANSFERCONNECTIONINFO_H
#define MBDEVICETRANSFERCONNECTIONINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBDeviceTransferConnectionInfo : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (nonatomic) NSInteger connectionType; // ivar: _connectionType


+(BOOL)supportsSecureCoding;
+(NSInteger)connectionTypeFromLinkType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif