// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALENTRYPAYLOADIDFACTORY_H
#define PLJOURNALENTRYPAYLOADIDFACTORY_H


#import <Foundation/Foundation.h>


@interface PLJournalEntryPayloadIDFactory : NSObject



+(id)payloadIDWithString:(id)arg0 ;
+(id)payloadIDWithUUIDBytes:(unsigned char)arg0 ;
+(id)payloadIDWithUUIDString:(id)arg0 ;


@end


#endif