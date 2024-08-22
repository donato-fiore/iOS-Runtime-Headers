// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTBUFFERDECODER_H
#define CNCONTACTBUFFERDECODER_H

@class NSMutableData;

#import <Foundation/Foundation.h>

#import "CNMutableContact.h"
#import "CNContactKeyVector.h"

@interface CNContactBufferDecoder : NSObject {
    NSInteger _state;
    CNMutableContact *_pendingContact;
    NSMutableData *_resumeBuffer;
    NSInteger _bytesNeededToResume;
}


@property (readonly) BOOL hasPendingContacts;
@property (copy, nonatomic) CNContactKeyVector *keyDescriptorToMakeAvailable; // ivar: _keyDescriptorToMakeAvailable
@property (nonatomic) BOOL mutableResults; // ivar: _mutableResults


-(BOOL)decodeContactsFromBuffer:(id)arg0 replyHandler:(id)arg1 ;
-(id)initWithKeyDescriptorToMakeAvailable:(id)arg0 mutableResults:(BOOL)arg1 ;


@end


#endif