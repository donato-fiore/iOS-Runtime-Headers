// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRTEXTINPUTMESSAGE_H
#define MRTEXTINPUTMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRTextInputMessage : MRProtocolMessage

@property (readonly, nonatomic) NSUInteger actionType;
@property (readonly, nonatomic) NSString *text;


-(NSUInteger)type;
-(id)initWithActionType:(NSUInteger)arg0 text:(id)arg1 ;


@end


#endif