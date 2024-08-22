// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSETARTWORKMESSAGE_H
#define MRSETARTWORKMESSAGE_H

@class NSData;


#import "MRProtocolMessage.h"

@interface MRSetArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *artworkData;


-(NSUInteger)type;
-(id)initWithArtworkData:(id)arg0 ;


@end


#endif