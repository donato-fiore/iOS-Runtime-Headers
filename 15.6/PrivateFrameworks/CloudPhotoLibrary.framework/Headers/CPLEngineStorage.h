// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINESTORAGE_H
#define CPLENGINESTORAGE_H

@class NSString;
@protocol CPLAbstractObject;

#import <Foundation/Foundation.h>

#import "CPLEngineStore.h"
#import "CPLPlatformObject.h"

@interface CPLEngineStorage : NSObject <CPLAbstractObject>

 {
    BOOL _superWasCalled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPLEngineStore *engineStore; // ivar: _engineStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAlive;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) NSUInteger scopeType;
@property (readonly, nonatomic) BOOL shouldBeCreatedDynamically; // ivar: _shouldBeCreatedDynamically
@property (readonly, nonatomic) BOOL shouldIncludeInStatus;
@property (readonly) Class superclass;


+(id)platformImplementationProtocol;
-(BOOL)_checkSuperWasCalled;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)testKey:(id)arg0 value:(id)arg1 didHandle:(*BOOL)arg2 result:(*id)arg3 error:(*id)arg4 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)redactedDescription;
-(id)status;
-(id)statusDictionary;
-(id)statusPerScopeIndex;
-(void)transactionDidFinish;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif