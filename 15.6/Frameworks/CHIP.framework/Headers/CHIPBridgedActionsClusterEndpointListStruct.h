// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPBRIDGEDACTIONSCLUSTERENDPOINTLISTSTRUCT_H
#define CHIPBRIDGEDACTIONSCLUSTERENDPOINTLISTSTRUCT_H

@class NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CHIPBridgedActionsClusterEndpointListStruct : NSObject

@property (retain, nonatomic) NSNumber *endpointListID; // ivar: _endpointListID
@property (retain, nonatomic) NSArray *endpoints; // ivar: _endpoints
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *type; // ivar: _type


-(id)init;


@end


#endif