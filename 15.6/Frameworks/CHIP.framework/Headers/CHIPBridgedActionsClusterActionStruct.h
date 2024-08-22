// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPBRIDGEDACTIONSCLUSTERACTIONSTRUCT_H
#define CHIPBRIDGEDACTIONSCLUSTERACTIONSTRUCT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPBridgedActionsClusterActionStruct : NSObject

@property (retain, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (retain, nonatomic) NSNumber *endpointListID; // ivar: _endpointListID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *supportedCommands; // ivar: _supportedCommands
@property (retain, nonatomic) NSNumber *type; // ivar: _type


-(id)init;


@end


#endif