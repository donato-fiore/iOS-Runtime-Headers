// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MATTERCONTROLLERFACTORYPARAMS_H
#define MATTERCONTROLLERFACTORYPARAMS_H

@class NSArray, NSNumber;
@protocol CHIPPersistentStorageDelegate;

#import <Foundation/Foundation.h>


@interface MatterControllerFactoryParams : NSObject

@property (retain, nonatomic) NSArray *paaCerts; // ivar: _paaCerts
@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (nonatomic) BOOL startServer; // ivar: _startServer
@property (readonly, nonatomic) NSObject<CHIPPersistentStorageDelegate> *storageDelegate; // ivar: _storageDelegate


-(id)initWithStorage:(id)arg0 ;


@end


#endif