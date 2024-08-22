// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DALOCALDBWATCHERDBINFO_H
#define DALOCALDBWATCHERDBINFO_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface DALocalDBWatcherDBInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *blocksByConcernedParty; // ivar: _blocksByConcernedParty
@property (nonatomic) int lastSavedSequenceNumber; // ivar: _lastSavedSequenceNumber
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(id)allBlocks;
-(id)allConcernedParties;
-(id)initWithPath:(id)arg0 ;
// -(void)addBlock:(id)arg0 forConcernedParty:(unk)arg1 account:(id)arg2  ;
-(void)removeBlockForConcernedParty:(id)arg0 account:(id)arg1 ;


@end


#endif