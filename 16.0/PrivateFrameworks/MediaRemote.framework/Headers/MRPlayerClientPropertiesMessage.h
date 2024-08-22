// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLAYERCLIENTPROPERTIESMESSAGE_H
#define MRPLAYERCLIENTPROPERTIESMESSAGE_H

@class NSDate;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRPlayerClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithPlayerPath:(id)arg0 lastPlayingDate:(id)arg1 ;


@end


#endif