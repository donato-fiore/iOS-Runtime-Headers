// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPSESSIONCONNECTIONPARAMETERS_H
#define IDSGROUPSESSIONCONNECTIONPARAMETERS_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer; // ivar: _multiplexer
@property (nonatomic) NSUInteger participantID; // ivar: _participantID
@property (copy, nonatomic) NSData *salt; // ivar: _salt
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGroupSessionConnectionParameters:(id)arg0 ;
-(id)description;
-(id)initWithStringRepresentation:(id)arg0 ;
-(id)stringRepresentation;


@end


#endif