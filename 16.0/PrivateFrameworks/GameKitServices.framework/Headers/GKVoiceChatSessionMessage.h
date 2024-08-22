// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKVOICECHATSESSIONMESSAGE_H
#define GKVOICECHATSESSIONMESSAGE_H

@class NSData;


#import "GKOOBMessage.h"

@interface GKVoiceChatSessionMessage : GKOOBMessage {
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}




-(BOOL)_checkSize:(NSUInteger)arg0 ;
-(BOOL)_checkType:(unsigned short)arg0 ;
-(id)data;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithPayload:(id)arg0 conferenceID:(unsigned int)arg1 subtype:(unsigned int)arg2 ;
-(id)payload;
-(unsigned int)conferenceID;
-(unsigned int)subtype;
-(void)dealloc;


@end


#endif