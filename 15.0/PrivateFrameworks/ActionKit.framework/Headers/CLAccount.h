// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLACCOUNT_H
#define CLACCOUNT_H

@class NSURL, NSString, NSDate;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "CLSocket.h"

@interface CLAccount : NSObject <NSCopying, NSCoding>



@property (nonatomic, getter=isAlphaUser) BOOL alphaUser; // ivar: _alphaUser
@property (retain, nonatomic) NSURL *domain; // ivar: _domain
@property (retain, nonatomic) NSURL *domainHomePage; // ivar: _domainHomePage
@property (copy, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) CLSocket *socket; // ivar: _socket
@property (retain, nonatomic) NSDate *subscriptionExpiresAt; // ivar: _subscriptionExpiresAt
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) BOOL uploadsArePrivate; // ivar: _uploadsArePrivate


+(id)accountWithEmail:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmail:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif