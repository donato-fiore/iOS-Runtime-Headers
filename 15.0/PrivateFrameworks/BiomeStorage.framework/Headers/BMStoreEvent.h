// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSTOREEVENT_H
#define BMSTOREEVENT_H

@class NSString, NSData;
@protocol BMStoreEvent, NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>

#import "BMFrame.h"
#import "BMStreamMetadata.h"

@interface BMStoreEvent : NSObject <BMStoreEvent, NSSecureCoding>

 {
    id<BMStoreData> *_eventBody;
    Class _dataType;
    NSUInteger _frameOffset;
    unsigned int _eventBodyDataVersion;
}


@property (readonly, nonatomic) Class dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned char error; // ivar: _error
@property (readonly, nonatomic) NSObject<BMStoreData> *eventBody;
@property (readonly, nonatomic) NSData *eventBodyData; // ivar: _eventBodyData
@property (readonly, nonatomic) NSUInteger eventCategory; // ivar: _eventCategory
@property (readonly, nonatomic) BMFrame *frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMStreamMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *segmentName; // ivar: _segmentName
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)eventWithEventType:(Class)arg0 eventData:(id)arg1 dataVersion:(unsigned int)arg2 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bookmark;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)initWithFrame:(id)arg0 error:(unsigned char)arg1 ;
-(id)initWithFrame:(id)arg0 error:(unsigned char)arg1 metadata:(id)arg2 ;
-(id)initWithFrame:(id)arg0 segmentName:(id)arg1 error:(unsigned char)arg2 eventCategory:(NSUInteger)arg3 metadata:(id)arg4 dataType:(Class)arg5 ;
-(id)initWithFrame:(id)arg0 segmentName:(id)arg1 frameOffset:(NSUInteger)arg2 eventBodyData:(id)arg3 eventBodyDataVersion:(unsigned int)arg4 dataType:(Class)arg5 eventCategory:(NSUInteger)arg6 timestamp:(CGFloat)arg7 metadata:(id)arg8 error:(unsigned char)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif