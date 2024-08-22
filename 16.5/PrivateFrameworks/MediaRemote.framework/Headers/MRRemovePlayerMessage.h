// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREMOVEPLAYERMESSAGE_H
#define MRREMOVEPLAYERMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRRemovePlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithPlayerPath:(id)arg0 ;


@end


#endif