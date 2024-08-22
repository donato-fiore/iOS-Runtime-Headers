// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSACCOUNTSERIALIZATIONCENTER_H
#define VSACCOUNTSERIALIZATIONCENTER_H

@class NSOperationQueue, NSUndoManager;

#import <Foundation/Foundation.h>

#import "VSPersistentStorage.h"

@interface VSAccountSerializationCenter : NSObject

@property (retain, nonatomic) NSOperationQueue *serializationQueue; // ivar: _serializationQueue
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (retain, nonatomic) NSUndoManager *undoManager;


+(id)defaultSerializationCenter;
-(id)exportDataWithCompletionHandler:(id)arg0 ;
-(id)importData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)init;


@end


#endif