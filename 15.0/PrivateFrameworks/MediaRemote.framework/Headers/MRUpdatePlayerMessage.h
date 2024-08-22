// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUPDATEPLAYERMESSAGE_H
#define MRUPDATEPLAYERMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRUpdatePlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithPlayerPath:(id)arg0 ;


@end


#endif