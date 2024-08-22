// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVORDEREDACTION_H
#define COREDAVORDEREDACTION_H

@class NSURL;


#import "CoreDAVAction.h"

@interface CoreDAVOrderedAction : CoreDAVAction

@property (readonly, nonatomic) int absoluteOrder; // ivar: _absoluteOrder
@property (retain, nonatomic) NSURL *priorURL; // ivar: _priorURL


-(id)description;
-(id)initWithAction:(int)arg0 context:(id)arg1 absoluteOrder:(int)arg2 ;


@end


#endif