// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNSTARTNAVIGATIONRECONNECTIONDETAILS_H
#define MNSTARTNAVIGATIONRECONNECTIONDETAILS_H

@class NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNStartNavigationReconnectionDetails : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isReconnecting; // ivar: _isReconnecting
@property (retain, nonatomic) NSData *serverSessionState; // ivar: _serverSessionState
@property (retain, nonatomic) NSArray *spokenAnnouncements; // ivar: _spokenAnnouncements
@property (nonatomic) NSUInteger targetLegIndex; // ivar: _targetLegIndex


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif