// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAIRMESSAGETRANSFORMER_H
#define AVAIRMESSAGETRANSFORMER_H

@class NSData;


#import "AVDataValueTransformer.h"

@interface AVAirMessageTransformer : AVDataValueTransformer {
    NSData *_previousUnusedData;
}


@property (readonly, nonatomic) Class messageClass; // ivar: _messageClass


-(id)dataForMessage:(id)arg0 ;
-(id)initWithMessageClass:(Class)arg0 ;
-(id)reverseTransformerForMessageData:(id)arg0 ;
-(void)resetState;


@end


#endif