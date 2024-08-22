// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRORIGINCLIENTPROPERTIESMESSAGE_H
#define MRORIGINCLIENTPROPERTIESMESSAGE_H

@class NSDate;


#import "MRProtocolMessage.h"

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;


-(NSUInteger)type;
-(id)initWithLastPlayingDate:(id)arg0 ;


@end


#endif