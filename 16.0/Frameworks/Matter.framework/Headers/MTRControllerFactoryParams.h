// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTROLLERFACTORYPARAMS_H
#define MTRCONTROLLERFACTORYPARAMS_H

@class NSArray, NSNumber;
@protocol MTRPersistentStorageDelegate;

#import <Foundation/Foundation.h>


@interface MTRControllerFactoryParams : NSObject

@property (retain, nonatomic) NSArray *paaCerts; // ivar: _paaCerts
@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (nonatomic) BOOL startServer; // ivar: _startServer
@property (readonly, nonatomic) NSObject<MTRPersistentStorageDelegate> *storageDelegate; // ivar: _storageDelegate


-(id)initWithStorage:(id)arg0 ;


@end


#endif