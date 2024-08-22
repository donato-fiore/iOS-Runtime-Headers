// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSIRITURN_H
#define ISSIRITURN_H

@class NSUUID;


#import "ISEventGraph.h"

@interface ISSiriTurn : ISEventGraph

@property (nonatomic, readonly) NSUUID *previousTurnId;
@property (nonatomic, readonly) CGFloat timeIntervalSince1970Nonnull;
@property (nonatomic, readonly) NSUUID *turnId;


+(id)constructWithEventGraph:(id)arg0 ;


@end


#endif