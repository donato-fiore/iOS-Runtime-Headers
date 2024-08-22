// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLRUNTIMEERRORRANGE_H
#define RWIPROTOCOLRUNTIMEERRORRANGE_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeErrorRange : RWIProtocolJSONObject

@property (nonatomic) int endOffset;
@property (nonatomic) int startOffset;


-(id)initWithStartOffset:(int)arg0 endOffset:(int)arg1 ;


@end


#endif