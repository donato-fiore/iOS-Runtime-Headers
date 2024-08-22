// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMSNEXCEPTIONMANAGER_H
#define CSMSNEXCEPTIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSMSNExceptionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *announceMessageExceptions; // ivar: _announceMessageExceptions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)beginAnnounceMessageException:(id)arg0 reason:(id)arg1 ;
-(void)endAnnounceMessageException:(id)arg0 reason:(id)arg1 ;


@end


#endif