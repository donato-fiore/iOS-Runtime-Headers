// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAUDIOFADEMESSAGE_H
#define MRAUDIOFADEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRAudioFadeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSInteger fadeType;
@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithPlayerPath:(id)arg0 fadeType:(NSInteger)arg1 ;


@end


#endif