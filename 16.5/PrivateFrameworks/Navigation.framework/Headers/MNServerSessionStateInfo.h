// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNSERVERSESSIONSTATEINFO_H
#define MNSERVERSESSIONSTATEINFO_H

@class NSData, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNServerSessionStateInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *directionsResponseID; // ivar: _directionsResponseID
@property (readonly, nonatomic) NSData *etauResponseID; // ivar: _etauResponseID
@property (readonly, nonatomic) NSData *sessionState; // ivar: _sessionState
@property (readonly, nonatomic) NSUUID *uniqueRouteID; // ivar: _uniqueRouteID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithETAUResponse:(id)arg0 ;
-(void)updateWithRoute:(id)arg0 ;
-(void)updateWithSessionState:(id)arg0 ;


@end


#endif