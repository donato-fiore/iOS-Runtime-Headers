// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRCREATEHOSTEDENDPOINTRESPONSEMESSAGE_H
#define MRCREATEHOSTEDENDPOINTRESPONSEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRCreateHostedEndpointResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *groupUID;


-(NSUInteger)type;
-(id)initWithGroupUID:(id)arg0 ;


@end


#endif