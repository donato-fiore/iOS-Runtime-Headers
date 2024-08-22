// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKARGONLOCALKEYDATABASE_H
#define NTKARGONLOCALKEYDATABASE_H

@class NSString, NSMutableDictionary, NSMutableOrderedSet;
@protocol NTKArgonLocalKeyDatabaseProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKArgonLocalKeyDatabase : NSObject <NTKArgonLocalKeyDatabaseProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *newlyAddedChangeTokens; // ivar: _newlyAddedChangeTokens
@property (readonly, nonatomic) NSMutableOrderedSet *newlyAddedKeyDescriptors; // ivar: _newlyAddedKeyDescriptors
@property (readonly, nonatomic) NSMutableDictionary *newlyAddedKeyDescriptorsByFileName; // ivar: _newlyAddedKeyDescriptorsByFileName
@property (nonatomic) NSUInteger nextFlushTime; // ivar: _nextFlushTime
@property (readonly, nonatomic) NSMutableDictionary *persistedChangeTokens; // ivar: _persistedChangeTokens
@property (readonly, nonatomic) NSMutableOrderedSet *persistedKeyDescriptors; // ivar: _persistedKeyDescriptors
@property (readonly, nonatomic) NSMutableDictionary *persistedKeyDescriptorsByFileName; // ivar: _persistedKeyDescriptorsByFileName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly, nonatomic) NSString *storagePath; // ivar: _storagePath
@property (readonly) Class superclass;


+(BOOL)_decodedKeyDescriptors:(*id)arg0 changeTokens:(*id)arg1 fromData:(id)arg2 error:(*id)arg3 ;
+(id)_argonKeyDatabaseErrorWithCode:(NSUInteger)arg0 userInfo:(id)arg1 ;
+(id)_jsonDataForKeyDescriptors:(id)arg0 changeTokens:(id)arg1 error:(*id)arg2 ;
-(BOOL)addKeyDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)initWithKeyStoragePath:(id)arg0 ;
-(id)keyDescriptorForFileName:(id)arg0 ;
-(id)latestChangeTokenForServerIdentifier:(id)arg0 ;
-(void)_queue_flushImmediately;
-(void)_queue_requestDelayedFlushWithMaximumTimeInterval:(CGFloat)arg0 ;
-(void)enumerateKeyDescriptors:(id)arg0 ;
-(void)flush;
-(void)flushWithinTimeInterval:(CGFloat)arg0 ;
-(void)recordChangeToken:(id)arg0 forServerIdentifier:(id)arg1 ;


@end


#endif