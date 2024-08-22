// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPISELFMESSAGEBUILDER_H
#define SPISELFMESSAGEBUILDER_H

@class SISchemaInstrumentationMessage;

#import <Foundation/Foundation.h>

#import "POWSchemaProvisionalPOWClientEvent.h"
#import "POWSchemaProvisionalPOWProcessUsage.h"
#import "POWSchemaProvisionalPOWUsage.h"

@interface SPISELFMessageBuilder : NSObject

@property (retain, nonatomic) SISchemaInstrumentationMessage *eventContextMsg; // ivar: _eventContextMsg
@property (retain, nonatomic) POWSchemaProvisionalPOWClientEvent *powClientEventMsg; // ivar: _powClientEventMsg
@property (retain, nonatomic) POWSchemaProvisionalPOWProcessUsage *procUsageMsg; // ivar: _procUsageMsg
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usageMsg; // ivar: _usageMsg


-(id)buildMessage;
-(id)init;
-(void)addContext:(id)arg0 ;
-(void)addProcess:(unsigned char)arg0 ;
-(void)addProcessUsage:(struct SPIResourceUsage )arg0 ;
-(void)addRequestLinkInfoForComponent:(int)arg0 identifier:(id)arg1 ;


@end


#endif