// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUPDATECONTENTITEMMESSAGE_H
#define MRUPDATECONTENTITEMMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *contentItems;
@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithContentItems:(id)arg0 forPlayerPath:(id)arg1 ;


@end


#endif