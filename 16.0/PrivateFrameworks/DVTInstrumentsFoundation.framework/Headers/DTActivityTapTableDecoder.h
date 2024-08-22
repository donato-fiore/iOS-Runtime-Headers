// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTACTIVITYTAPTABLEDECODER_H
#define DTACTIVITYTAPTABLEDECODER_H

@class NSMutableArray, NSMutableData, XRIntKeyedDictionary, XRConstantEngineeringValue, NSString;

#import <Foundation/Foundation.h>

#import "DTActivityTraceTapMemo.h"

@interface DTActivityTapTableDecoder : NSObject {
    NSMutableArray *_memos;
    DTActivityTraceTapMemo *_currentChunk;
    NSMutableData *_stack;
    unique_ptr<DTTableRowDecoder, std::default_delete<DTTableRowDecoder>> _tableRowDecoder;
    unique_ptr<DTStateActionDecoder, std::default_delete<DTStateActionDecoder>> _decoder;
    unsigned char _osLogTableID;
    XRIntKeyedDictionary *_processesByPID;
    XRIntKeyedDictionary *_threadsByTID;
    char _buffer;
    ? _columns;
}


@property (readonly, nonatomic) XRConstantEngineeringValue *backtrace;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic, getter=hasFailed) BOOL failed; // ivar: _failed
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) XRConstantEngineeringValue *message;
@property (readonly, nonatomic) unsigned char messageType;
@property (readonly, nonatomic, getter=isOutOfData) BOOL outOfData; // ivar: _outOfData
@property (readonly, nonatomic) XRConstantEngineeringValue *process;
@property (readonly, nonatomic) NSUInteger senderImageOffset;
@property (readonly, nonatomic) NSString *senderImagePath;
@property (readonly, nonatomic) XRConstantEngineeringValue *senderImageUUID;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) XRConstantEngineeringValue *thread;
@property (readonly, nonatomic) NSUInteger time;


-(BOOL)next;
-(id)init;
-(void)addData:(id)arg0 ;
-(void)addMemo:(id)arg0 ;


@end


#endif