// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDEXTENSIONINDEXER_H
#define FPDEXTENSIONINDEXER_H



#import "FPDDomainIndexer.h"

@interface FPDExtensionIndexer : FPDDomainIndexer



-(void)dropIndexForDomainRemoval:(BOOL)arg0 completion:(id)arg1 ;
-(void)indexOneBatchWithCompletionHandler:(id)arg0 ;


@end


#endif