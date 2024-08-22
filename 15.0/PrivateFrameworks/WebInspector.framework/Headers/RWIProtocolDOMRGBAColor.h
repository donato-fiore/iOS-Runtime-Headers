// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLDOMRGBACOLOR_H
#define RWIPROTOCOLDOMRGBACOLOR_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDOMRGBAColor : RWIProtocolJSONObject

@property (nonatomic) CGFloat a;
@property (nonatomic) int b;
@property (nonatomic) int g;
@property (nonatomic) int r;


-(id)initWithR:(int)arg0 g:(int)arg1 b:(int)arg2 ;


@end


#endif