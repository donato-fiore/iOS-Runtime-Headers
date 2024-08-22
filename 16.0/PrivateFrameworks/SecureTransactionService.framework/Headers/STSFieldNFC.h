// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSFIELDNFC_H
#define STSFIELDNFC_H

@class NSData, NSArray;


#import "STSField.h"

@interface STSFieldNFC : STSField

@property (readonly) unsigned int nfcTechnology; // ivar: _nfcTechnology
@property (readonly) NSData *openLoopSchemeBitfield; // ivar: _openLoopSchemeBitfield
@property (readonly) unsigned short systemCode; // ivar: _systemCode
@property (readonly) NSArray *tcis; // ivar: _tcis
@property (readonly) unsigned int terminalMode; // ivar: _terminalMode


-(void)setNFCTechnology:(unsigned int)arg0 ;
-(void)setTCIS:(id)arg0 ;


@end


#endif