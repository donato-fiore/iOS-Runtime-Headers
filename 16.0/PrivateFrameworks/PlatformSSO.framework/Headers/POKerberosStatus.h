// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POKERBEROSSTATUS_H
#define POKERBEROSSTATUS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface POKerberosStatus : NSObject <NSSecureCoding>



@property (retain) NSString *cacheName; // ivar: _cacheName
@property BOOL exchangeRequired; // ivar: _exchangeRequired
@property BOOL importSuccessful; // ivar: _importSuccessful
@property (retain) NSString *realm; // ivar: _realm
@property (retain) NSString *ticketKeyPath; // ivar: _ticketKeyPath
@property (retain) NSString *upn; // ivar: _upn


+(BOOL)supportsSecureCoding;
-(id)dataRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif