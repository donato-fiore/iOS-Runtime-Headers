// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRUIFACECOMMANDRECORDS_H
#define SRUIFACECOMMANDRECORDS_H

@class NSString, NSMutableDictionary;
@protocol SRUIFAceCommandRecordDelegate, SRUIFAceCommandRecordsDelegate;

#import <Foundation/Foundation.h>


@interface SRUIFAceCommandRecords : NSObject <SRUIFAceCommandRecordDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SRUIFAceCommandRecordsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_recordsByCommandIdentifier) NSMutableDictionary *recordsByCommandIdentifier; // ivar: _recordsByCommandIdentifier
@property (readonly) Class superclass;


-(NSInteger)resultForAceCommand:(id)arg0 ;
-(id)_recordForAceCommand:(id)arg0 ;
-(id)aceCommandWithIdentifier:(id)arg0 ;
-(id)init;
-(id)pendingAddViewsWithReflectionDialogPhaseWithRefId:(id)arg0 ;
-(void)aceCommandRecordDidChangeResult:(id)arg0 ;
-(void)recordActionCompletedForAceCommand:(id)arg0 success:(BOOL)arg1 ;
-(void)recordActionStartedForAceCommand:(id)arg0 ;
-(void)recordActionStoppedForAceCommand:(id)arg0 ;
-(void)registerAceCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif