// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSEXPRESSEVENTINFOWITHIDENTIFIERS_H
#define STSEXPRESSEVENTINFOWITHIDENTIFIERS_H

@class NSString;


#import "STSExpressEventInfo.h"

@interface STSExpressEventInfoWithIdentifiers : STSExpressEventInfo

@property (readonly, nonatomic) NSString *appletIdentifier; // ivar: _appletIdentifier
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier


-(id)initWithState:(unsigned int)arg0 appletIdentifier:(id)arg1 keyIdentifier:(id)arg2 ;


@end


#endif