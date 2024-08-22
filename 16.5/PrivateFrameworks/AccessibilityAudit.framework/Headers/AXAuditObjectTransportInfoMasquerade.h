// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITOBJECTTRANSPORTINFOMASQUERADE_H
#define AXAUDITOBJECTTRANSPORTINFOMASQUERADE_H



#import "AXAuditObjectTransportInfo.h"

@interface AXAuditObjectTransportInfoMasquerade : AXAuditObjectTransportInfo

@property (copy, nonatomic) id *createLocalObjectWithMasqueradeObjectBlock; // ivar: _createLocalObjectWithMasqueradeObjectBlock
@property (copy, nonatomic) id *createMasqueradeObjectBlock; // ivar: _createMasqueradeObjectBlock
@property (retain, nonatomic) Class masqueradeAsClass; // ivar: _masqueradeAsClass
@property (retain, nonatomic) AXAuditObjectTransportInfo *masqueradeTransportInfo; // ivar: _masqueradeTransportInfo


-(id)init;
-(void)_initializeBlocks;


@end


#endif