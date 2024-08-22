// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAUDIOFADERESPONSEMESSAGE_H
#define MRAUDIOFADERESPONSEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRAudioFadeResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSInteger fadeDuration;


-(NSUInteger)type;
-(id)initWithFadeDuration:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif