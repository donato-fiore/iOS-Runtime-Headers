// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTRANSACTIONSTARTEVENT_H
#define STSTRANSACTIONSTARTEVENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "STSCredential.h"

@interface STSTransactionStartEvent : NSObject

@property (nonatomic) BOOL background; // ivar: _background
@property (retain, nonatomic) STSCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSString *spIdentifier; // ivar: _spIdentifier
@property (nonatomic) unsigned short transactionMode; // ivar: _transactionMode


-(id)initWithCredential:(id)arg0 andDigitalCarKeyStartEvent:(id)arg1 ;
-(id)initWithCredential:(id)arg0 andNearFieldStartEvent:(id)arg1 ;


@end


#endif