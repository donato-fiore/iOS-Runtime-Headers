// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERBROWSERCOORDINATORINFO_H
#define HAP2ACCESSORYSERVERBROWSERCOORDINATORINFO_H

@class NSError;
@protocol HAP2AccessoryServerCoordinatorPrivate;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerBrowserCoordinatorInfo : NSObject

@property (readonly, nonatomic) NSObject<HAP2AccessoryServerCoordinatorPrivate> *coordinator; // ivar: _coordinator
@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)initWithCoordinator:(id)arg0 ;


@end


#endif