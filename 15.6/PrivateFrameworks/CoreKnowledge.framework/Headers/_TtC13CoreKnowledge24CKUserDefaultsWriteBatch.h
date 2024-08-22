// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13COREKNOWLEDGE24CKUSERDEFAULTSWRITEBATCH_H
#define _TTC13COREKNOWLEDGE24CKUSERDEFAULTSWRITEBATCH_H

@class TtC13CoreKnowledge20CKAbstractWriteBatch;
@protocol CKKnowledgeStoreWriteBatch;



@interface _TtC13CoreKnowledge24CKUserDefaultsWriteBatch : TtC13CoreKnowledge20CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch>





-(BOOL)writeAndReturnError:(*id)arg0 ;
-(void)writeWithCompletionHandler:(id)arg0 ;


@end


#endif