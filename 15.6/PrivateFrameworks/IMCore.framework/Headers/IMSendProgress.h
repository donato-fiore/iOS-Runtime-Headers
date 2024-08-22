// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSENDPROGRESS_H
#define IMSENDPROGRESS_H

@class NSTimer, NSDictionary;
@protocol IMSendProgressDelegate, IMSendProgressTimeDataSource;

#import <Foundation/Foundation.h>


@interface IMSendProgress : NSObject {
    NSTimer *_sendProgressTimer;
    float _cachedSendProgress;
    BOOL _wasShowing;
}


@property (weak, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) NSObject<IMSendProgressDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *sendingItems; // ivar: _sendingItems
@property (nonatomic) BOOL startSendProgressImmediately; // ivar: _startSendProgressImmediately
@property (retain, nonatomic) NSObject<IMSendProgressTimeDataSource> *timeDataSource; // ivar: _timeDataSource


-(BOOL)_hasSendingMessages;
-(id)description;
-(id)initWithDelegate:(id)arg0 context:(id)arg1 ;
-(void)_resetSendProgress;
-(void)_scheduleSendProgressTimerIfNeeded;
-(void)_sendProgressTimerFired:(id)arg0 ;
-(void)_updateSendProgress;
-(void)dealloc;
-(void)invalidate;
-(void)updateForItems:(id)arg0 forced:(BOOL)arg1 ;


@end


#endif