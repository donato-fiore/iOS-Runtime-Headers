// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNINTERFACECONNECTIONOPERATION_H
#define LNINTERFACECONNECTIONOPERATION_H

@protocol LNConnectionHostInterface;


#import "LNConnectionOperation.h"

@interface LNInterfaceConnectionOperation : LNConnectionOperation

@property (readonly, nonatomic) NSObject<LNConnectionHostInterface> *connectionInterface; // ivar: _connectionInterface


-(id)initWithIdentifier:(id)arg0 connectionInterface:(id)arg1 priority:(NSInteger)arg2 activity:(id)arg3 ;


@end


#endif