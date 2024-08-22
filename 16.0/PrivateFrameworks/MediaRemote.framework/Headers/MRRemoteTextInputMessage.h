// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRREMOTETEXTINPUTMESSAGE_H
#define MRREMOTETEXTINPUTMESSAGE_H

@class NSData;


#import "MRProtocolMessage.h"

@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSUInteger version;


-(NSUInteger)type;
-(id)initWithVersion:(NSUInteger)arg0 data:(id)arg1 ;


@end


#endif