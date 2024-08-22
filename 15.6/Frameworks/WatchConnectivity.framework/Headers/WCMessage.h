// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCMESSAGE_H
#define WCMESSAGE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WCMessage : NSObject <NSSecureCoding>



@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly, getter=isDictionaryMessage) BOOL dictionaryMessage; // ivar: _dictionaryMessage
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *pairingID; // ivar: _pairingID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingID:(id)arg0 identifier:(id)arg1 data:(id)arg2 dictionaryMessage:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif