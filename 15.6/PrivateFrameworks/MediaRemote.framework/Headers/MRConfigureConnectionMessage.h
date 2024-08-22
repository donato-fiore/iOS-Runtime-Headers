// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCONFIGURECONNECTIONMESSAGE_H
#define MRCONFIGURECONNECTIONMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRConfigureConnectionMessage : MRProtocolMessage

@property (copy, nonatomic) NSString *groupID;


-(NSUInteger)type;
-(id)initWithGroupID:(id)arg0 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif