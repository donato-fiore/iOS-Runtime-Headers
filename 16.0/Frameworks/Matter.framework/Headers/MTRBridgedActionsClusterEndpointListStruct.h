// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBRIDGEDACTIONSCLUSTERENDPOINTLISTSTRUCT_H
#define MTRBRIDGEDACTIONSCLUSTERENDPOINTLISTSTRUCT_H

@class NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MTRBridgedActionsClusterEndpointListStruct : NSObject

@property (retain, nonatomic) NSNumber *endpointListID; // ivar: _endpointListID
@property (retain, nonatomic) NSArray *endpoints; // ivar: _endpoints
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *type; // ivar: _type


-(id)description;
-(id)init;


@end


#endif