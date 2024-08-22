// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAMOVEACTION_H
#define DAMOVEACTION_H

@class NSString;


#import "DAAction.h"

@interface DAMoveAction : DAAction

@property (retain, nonatomic) NSString *destinationContainerId; // ivar: _destinationContainerId
@property (retain, nonatomic) NSString *sourceContainerId; // ivar: _sourceContainerId
@property (retain, nonatomic) NSString *sourceServerId; // ivar: _sourceServerId


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemChangeType:(NSUInteger)arg0 changedItem:(id)arg1 sourceContainerId:(id)arg2 sourceServerId:(id)arg3 destinationContainerId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif