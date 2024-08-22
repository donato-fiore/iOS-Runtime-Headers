// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDEBUGACCOUNTSTATE_H
#define MFDEBUGACCOUNTSTATE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "MailAccount.h"

@interface MFDebugAccountState : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *lastKnownCapabilities; // ivar: _lastKnownCapabilities
@property (retain, nonatomic) MailAccount *mailAccount; // ivar: _mailAccount


-(id)dictionaryRepresentation;
-(id)initWithStateEventDictionary:(id)arg0 identifier:(id)arg1 lastKnownCapabilities:(id)arg2 ;


@end


#endif