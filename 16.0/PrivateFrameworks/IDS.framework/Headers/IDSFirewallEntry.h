// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSFIREWALLENTRY_H
#define IDSFIREWALLENTRY_H

@class NSDate, NSString, IDSURI;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSFirewallEntry : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL isDonated; // ivar: _isDonated
@property (readonly, nonatomic) NSDate *lastSeen; // ivar: _lastSeen
@property (retain, nonatomic) NSString *mergeID; // ivar: _mergeID
@property (readonly, nonatomic) IDSURI *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 ;
-(id)initWithURI:(id)arg0 andLastSeenDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif