// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPREADCLIENTCONTAINER_H
#define CHIPREADCLIENTCONTAINER_H


#import <Foundation/Foundation.h>


@interface CHIPReadClientContainer : NSObject

@property (nonatomic) NSUInteger deviceId; // ivar: _deviceId
@property (nonatomic) *AttributePathParams pathParams; // ivar: _pathParams
@property (nonatomic) *void readClientPtr; // ivar: _readClientPtr


-(void)dealloc;
-(void)onDone;


@end


#endif