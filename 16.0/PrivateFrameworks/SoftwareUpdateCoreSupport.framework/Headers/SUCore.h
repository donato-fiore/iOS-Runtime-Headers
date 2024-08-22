// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCORE_H
#define SUCORE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCore : NSObject

@property (retain, nonatomic) NSString *baseDomain; // ivar: _baseDomain
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // ivar: _delegateCallbackQueue
@property (retain, nonatomic) NSString *filesystemBaseDir; // ivar: _filesystemBaseDir
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *waitedOperationQueue; // ivar: _waitedOperationQueue


+(BOOL)arrayIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)dataIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)dateIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)dictionaryIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)errorIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)numberIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)objectIsEqual:(id)arg0 to:(id)arg1 ;
+(BOOL)setFileMetadata:(char *)arg0 forKey:(id)arg1 value:(id)arg2 ;
+(BOOL)stringIsEqual:(id)arg0 to:(id)arg1 ;
+(id)beginTransactionWithName:(id)arg0 ;
+(id)errorNameForCode:(NSInteger)arg0 ;
+(id)getFileMetadata:(char *)arg0 forKey:(id)arg1 ;
+(id)limitString:(id)arg0 toMaxLength:(NSUInteger)arg1 providingSubstitutionMap:(id)arg2 ;
+(id)sharedCore;
+(id)sharedSUCoreDomainAppending:(id)arg0 ;
+(id)stringFromDate:(id)arg0 ;
+(id)stringFromTriState:(NSInteger)arg0 ;
+(void)endTransaction:(id)arg0 withName:(id)arg1 ;
-(id)buildError:(NSInteger)arg0 underlying:(id)arg1 description:(id)arg2 ;
-(id)commonDomain;
-(id)commonFilesystemBaseDir;
-(id)init;
-(id)selectCompletionQueue:(id)arg0 ;
-(id)selectDelegateCallbackQueue:(id)arg0 ;
-(void)useDomain:(id)arg0 ;
-(void)useFilesystemBaseDir:(id)arg0 ;


@end


#endif