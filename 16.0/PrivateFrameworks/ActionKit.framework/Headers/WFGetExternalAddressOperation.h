// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGETEXTERNALADDRESSOPERATION_H
#define WFGETEXTERNALADDRESSOPERATION_H

@class NSOperation, NSMutableData, NSError, NSString;



@interface WFGetExternalAddressOperation : NSOperation

@property (retain, nonatomic) NSMutableData *data; // ivar: _data
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *result; // ivar: _result
@property (nonatomic) *__CFReadStream stream; // ivar: _stream
@property (nonatomic) BOOL useIPv6; // ivar: _useIPv6


-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(void)dealloc;
-(void)handleStreamEvent:(NSUInteger)arg0 ;
-(void)start;
-(void)update;


@end


#endif