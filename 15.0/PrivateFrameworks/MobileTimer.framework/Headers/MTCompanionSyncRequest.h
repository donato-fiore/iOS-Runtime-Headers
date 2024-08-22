// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOMPANIONSYNCREQUEST_H
#define MTCOMPANIONSYNCREQUEST_H

@class NSMutableArray, NSString, NSError;
@protocol MTSyncToken, NAScheduler;

#import <Foundation/Foundation.h>


@interface MTCompanionSyncRequest : NSObject <MTSyncToken>



@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly) Class superclass;


+(id)requestWithType:(NSUInteger)arg0 ;
-(id)initWithRequestType:(NSUInteger)arg0 ;
-(id)requestDescription;
-(void)addCompletionBlock:(id)arg0 ;
-(void)complete:(id)arg0 ;


@end


#endif