// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAONGOINGACCESSINTERVALSTATE_H
#define PAONGOINGACCESSINTERVALSTATE_H


#import <Foundation/Foundation.h>

#import "PAAccess.h"

@interface PAOngoingAccessIntervalState : NSObject

@property (retain, nonatomic) PAAccess *access; // ivar: _access
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount


-(id)initWithAccess:(id)arg0 ;


@end


#endif