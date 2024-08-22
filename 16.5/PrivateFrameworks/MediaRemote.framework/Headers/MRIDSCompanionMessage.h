// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRIDSCOMPANIONMESSAGE_H
#define MRIDSCOMPANIONMESSAGE_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MRIDSCompanionMessage : NSObject

@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy, nonatomic) NSNumber *messageID; // ivar: _messageID


-(BOOL)replyWithData:(id)arg0 priority:(NSInteger)arg1 ;
-(id)initWithID:(id)arg0 data:(id)arg1 ;


@end


#endif