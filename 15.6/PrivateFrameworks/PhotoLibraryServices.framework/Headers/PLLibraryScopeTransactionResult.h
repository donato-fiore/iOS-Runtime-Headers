// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIBRARYSCOPETRANSACTIONRESULT_H
#define PLLIBRARYSCOPETRANSACTIONRESULT_H

@class NSArray, NSPersistentHistoryToken;

#import <Foundation/Foundation.h>


@interface PLLibraryScopeTransactionResult : NSObject

@property (readonly, copy) NSArray *assetObjectIDs; // ivar: _assetObjectIDs
@property (readonly, copy) NSArray *detectedFaceObjectIDs; // ivar: _detectedFaceObjectIDs
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken; // ivar: _lastProcessedCoreDataToken


-(id)initWithToken:(id)arg0 assetObjectIDs:(id)arg1 detectedFaceObjectIDs:(id)arg2 ;


@end


#endif