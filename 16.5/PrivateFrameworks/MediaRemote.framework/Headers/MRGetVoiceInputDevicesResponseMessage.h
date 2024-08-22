// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRGETVOICEINPUTDEVICESRESPONSEMESSAGE_H
#define MRGETVOICEINPUTDEVICESRESPONSEMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly, nonatomic) NSInteger errorCode;


-(NSUInteger)type;
-(id)initWithDeviceIDs:(id)arg0 errorCode:(NSInteger)arg1 ;


@end


#endif