// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUPDATECONTENTITEMARTWORKMESSAGE_H
#define MRUPDATECONTENTITEMARTWORKMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *contentItems;
@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithContentItems:(id)arg0 forPlayerPath:(id)arg1 ;


@end


#endif