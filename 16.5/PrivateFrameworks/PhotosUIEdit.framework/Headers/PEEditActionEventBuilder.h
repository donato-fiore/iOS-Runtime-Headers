// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEEDITACTIONEVENTBUILDER_H
#define PEEDITACTIONEVENTBUILDER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PEEditAction.h"

@interface PEEditActionEventBuilder : NSObject

@property (retain, nonatomic) PEEditAction *action; // ivar: _action
@property (retain, nonatomic) NSString *actionDescription; // ivar: _actionDescription
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (nonatomic) BOOL hasError; // ivar: _hasError


-(id)buildEvent;


@end


#endif