// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXHANDOFFCONTEXT_H
#define CXHANDOFFCONTEXT_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CXHandle.h"

@interface CXHandoffContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *handoffIdentifier; // ivar: _handoffIdentifier
@property (nonatomic, getter=isOutgoing) BOOL outgoing; // ivar: _outgoing
@property (copy, nonatomic) CXHandle *remoteHandle; // ivar: _remoteHandle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHandoffContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithHandoffIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif