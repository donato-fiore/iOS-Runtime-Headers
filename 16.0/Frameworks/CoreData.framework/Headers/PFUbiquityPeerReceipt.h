// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYPEERRECEIPT_H
#define PFUBIQUITYPEERRECEIPT_H

@class NSDate;


#import "PFUbiquitySafeSaveFile.h"
#import "PFUbiquityKnowledgeVector.h"

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {
    PFUbiquityKnowledgeVector *_kv;
    NSDate *_writeDate;
}




-(BOOL)loadFileFromLocation:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeFileToLocation:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithLocalPeerID:(id)arg0 andKnowledgeVector:(id)arg1 forPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
-(id)initWithLocalPeerID:(id)arg0 andReceiptFileLocation:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg0 receiptPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)dealloc;


@end


#endif