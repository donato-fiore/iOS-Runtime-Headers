// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSOCIALHIGHLIGHTCONTACT_H
#define BMSOCIALHIGHLIGHTCONTACT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMSocialHighlightContact : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMe; // ivar: _isMe
@property (readonly, nonatomic) BOOL isSignificant; // ivar: _isSignificant
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initWithHandle:(id)arg0 isSignificant:(BOOL)arg1 isMe:(BOOL)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif