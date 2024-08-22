// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKARGONMANAGER_H
#define NTKARGONMANAGER_H

@class NSArray, NSHashTable;
@protocol NTKArgonExtractorProviding, NTKArgonLocalKeyDatabaseProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKArgonManager : NSObject

@property (readonly, nonatomic) NSObject<NTKArgonExtractorProviding> *extractor; // ivar: _extractor
@property (readonly, nonatomic) NSArray *fetchers; // ivar: _fetchers
@property (readonly, nonatomic) NSObject<NTKArgonLocalKeyDatabaseProviding> *keyDatabase; // ivar: _keyDatabase
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_queue_extractedKeyDescriptors;
-(id)initWithKeyDatabase:(id)arg0 fetchers:(id)arg1 extractor:(id)arg2 ;
-(void)_queue_extractKnownKeyDescriptorsIfNeededWithCompletion:(id)arg0 ;
-(void)addArgonManagerObserver:(id)arg0 ;
-(void)extractKnownKeyDescriptorsIfNeededWithCompletion:(id)arg0 ;
-(void)refreshWithReason:(NSInteger)arg0 ;
-(void)removeArgonManagerObserver:(id)arg0 ;


@end


#endif