// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARINSTRUMENTCLUSTERURLCONTROLLER_H
#define CARINSTRUMENTCLUSTERURLCONTROLLER_H

@class BSServiceConnection, NSString;
@protocol CARAppHistoryServerToClientInterface, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CARInstrumentClusterURLController : NSObject <CARAppHistoryServerToClientInterface, BSInvalidatable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)fetchInstrumentClusterURLs:(id)arg0 ;
-(void)invalidate;


@end


#endif