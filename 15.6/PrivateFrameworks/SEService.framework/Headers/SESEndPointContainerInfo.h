// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESENDPOINTCONTAINERINFO_H
#define SESENDPOINTCONTAINERINFO_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESEndPointContainerInfo : NSObject <NSSecureCoding>



@property (readonly) NSData *appletAID; // ivar: _appletAID
@property (readonly) BOOL isSuspended; // ivar: _isSuspended


+(BOOL)supportsSecureCoding;
+(id)withAppletAID:(id)arg0 isSuspended:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif