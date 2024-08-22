// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIPURCHASEREQUESTSTATUSMANAGER_H
#define SEARCHUIPURCHASEREQUESTSTATUSMANAGER_H

@class BPSSink, NSNotificationCenter, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SearchUIPurchaseRequestStatusManager : NSObject

@property (retain, nonatomic) BPSSink *biomeSink; // ivar: _biomeSink
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSMutableDictionary *requestStatuses; // ivar: _requestStatuses


+(id)sharedManager;
-(id)addObserver:(id)arg0 ;
-(id)init;
-(int)statusForRequestID:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)setupSink;
-(void)updateWithEvent:(id)arg0 ;


@end


#endif