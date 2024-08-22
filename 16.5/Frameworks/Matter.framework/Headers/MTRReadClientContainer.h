// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRREADCLIENTCONTAINER_H
#define MTRREADCLIENTCONTAINER_H


#import <Foundation/Foundation.h>


@interface MTRReadClientContainer : NSObject

@property (nonatomic) NSUInteger deviceID; // ivar: _deviceID
@property (nonatomic) *EventPathParams eventPathParams; // ivar: _eventPathParams
@property (nonatomic) *AttributePathParams pathParams; // ivar: _pathParams
@property (nonatomic) *void readClientPtr; // ivar: _readClientPtr


-(void)dealloc;
-(void)onDone;


@end


#endif