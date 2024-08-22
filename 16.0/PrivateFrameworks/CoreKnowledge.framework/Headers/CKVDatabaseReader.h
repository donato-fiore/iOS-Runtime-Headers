// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASEREADER_H
#define CKVDATABASEREADER_H

@class KVProvisionalResourceManager, NSString;
@protocol CKVDatabaseReadOnlyAccess;

#import <Foundation/Foundation.h>

#import "CKVDatabaseConnection.h"

@interface CKVDatabaseReader : NSObject <CKVDatabaseReadOnlyAccess>

 {
    CKVDatabaseConnection *_connection;
    CGFloat _lifespan;
    KVProvisionalResourceManager *_resourceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)readerForDatabaseAtURL:(id)arg0 ;
-(BOOL)activateWithError:(*id)arg0 operationBlock:(id)arg1 ;
-(BOOL)deactivateWithError:(*id)arg0 ;
-(BOOL)enumerateRecordResultsOfSelect:(id)arg0 recordClass:(Class)arg1 batchSize:(NSUInteger)arg2 offset:(NSUInteger)arg3 enumerateAll:(BOOL)arg4 error:(*id)arg5 usingBlock:(id)arg6 ;
-(BOOL)enumerateRecordResultsOfSelect:(id)arg0 recordClass:(Class)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 batchSize:(NSUInteger)arg1 offset:(NSUInteger)arg2 enumerateAll:(BOOL)arg3 error:(*id)arg4 usingBlock:(id)arg5 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(id)_activationBlock:(SEL)arg0 ;
-(id)_deactivationBlock:(SEL)arg0 ;
-(id)init;
-(id)initWithConnection:(id)arg0 lifespan:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif