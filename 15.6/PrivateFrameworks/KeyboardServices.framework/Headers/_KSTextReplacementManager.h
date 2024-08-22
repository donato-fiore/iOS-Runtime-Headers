// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSTEXTREPLACEMENTMANAGER_H
#define _KSTEXTREPLACEMENTMANAGER_H

@class NSString;
@protocol _KSTextReplacementSyncProtocol;

#import <Foundation/Foundation.h>

#import "_KSTextReplacementCKStore.h"

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol>



@property (retain, nonatomic) _KSTextReplacementCKStore *ckStore; // ivar: _ckStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *directoryPath; // ivar: _directoryPath
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore; // ivar: _textReplacementStore


+(id)textReplacementStoreWithTestDirectory:(id)arg0 withDelegate:(id)arg1 ;
-(CGFloat)minimumUptimeRemaining;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithDirectoryPath:(id)arg0 ;
-(void)dealloc;
-(void)notifyTextReplacementDidChange;
-(void)pushAllLocalRecordsOnceIfNeeded;
-(void)recordSyncStatus;
-(void)requestSync:(NSUInteger)arg0 withCompletionBlock:(id)arg1 ;
-(void)requestSyncWithCompletionBlock:(id)arg0 ;


@end


#endif