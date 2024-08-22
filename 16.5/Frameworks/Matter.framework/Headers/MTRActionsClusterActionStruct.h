// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACTIONSCLUSTERACTIONSTRUCT_H
#define MTRACTIONSCLUSTERACTIONSTRUCT_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRActionsClusterActionStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (copy, nonatomic) NSNumber *endpointListID; // ivar: _endpointListID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *state; // ivar: _state
@property (copy, nonatomic) NSNumber *supportedCommands; // ivar: _supportedCommands
@property (copy, nonatomic) NSNumber *type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif