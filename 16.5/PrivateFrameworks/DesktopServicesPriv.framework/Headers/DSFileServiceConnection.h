// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSFILESERVICECONNECTION_H
#define DSFILESERVICECONNECTION_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DSFileServiceConnection : NSObject {
    NSObject<OS_dispatch_source> *_updateCurrentOperationsSource;
    NSMutableArray *_progresses;
    NSMutableDictionary *_progressTokenMap;
    NSMutableArray *_fileOperations;
}


@property (copy, nonatomic) id *didUpdateInProgressOperationsHandler; // ivar: _didUpdateInProgressOperationsHandler


-(BOOL)_addOperationForProgress:(id)arg0 ;
-(id)init;
-(void)_reloadCurrentOperations;
-(void)_removeOperationForProgress:(id)arg0 ;
-(void)_subscribeToProgressIfNeeded:(id)arg0 ;
-(void)_triggerReloadCurrentOperations;
-(void)dealloc;
-(void)requestInProgressOperationsWithResponseBlock:(id)arg0 ;


@end


#endif