// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMESSAGEPROCESSINGCONTROLLER_H
#define IMDMESSAGEPROCESSINGCONTROLLER_H

@class NSTimer;
@protocol IMDMessagePTaskStore;

#import <Foundation/Foundation.h>


@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) NSObject<IMDMessagePTaskStore> *pTaskStore; // ivar: _pTaskStore
@property (retain, nonatomic) NSTimer *processingTimer; // ivar: _processingTimer


-(BOOL)_pref_IMDCoreSpotlightHasMigrated;
-(id)init;
-(id)initWithMessagesPTaskStore:(id)arg0 ;
-(void)_indexSpotlightIfNeedForPTask:(id)arg0 ;
-(void)_scheduleDeferredProcessingWithTimeInterval:(CGFloat)arg0 ;
-(void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg0 ;
-(void)dealloc;
-(void)messageProcessingTaskAdded:(id)arg0 ;
-(void)scheduleInitialProcessingCheck;


@end


#endif