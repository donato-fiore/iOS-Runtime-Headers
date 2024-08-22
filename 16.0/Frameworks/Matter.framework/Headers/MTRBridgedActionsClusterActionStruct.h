// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBRIDGEDACTIONSCLUSTERACTIONSTRUCT_H
#define MTRBRIDGEDACTIONSCLUSTERACTIONSTRUCT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRBridgedActionsClusterActionStruct : NSObject

@property (retain, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (retain, nonatomic) NSNumber *endpointListID; // ivar: _endpointListID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *supportedCommands; // ivar: _supportedCommands
@property (retain, nonatomic) NSNumber *type; // ivar: _type


-(id)description;
-(id)init;


@end


#endif