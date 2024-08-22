// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSMIREGISTRANTSERVERSTRATEGY_H
#define LSMIREGISTRANTSERVERSTRATEGY_H

@class NSString;
@protocol LSMIResultRegistrantStrategy;

#import <Foundation/Foundation.h>


@interface LSMIRegistrantServerStrategy : NSObject <LSMIResultRegistrantStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)notificationJournallerForBundleIdentifier:(id)arg0 registeringPlaceholder:(BOOL)arg1 ;
-(id)preUnregistrationContextForBundleIdentifier:(id)arg0 ;
-(void)beginModificationOperation;
-(void)endModificationOperation;
-(void)flushModificationState;
-(void)runSyncBlockInWriteContext:(id)arg0 ;


@end


#endif