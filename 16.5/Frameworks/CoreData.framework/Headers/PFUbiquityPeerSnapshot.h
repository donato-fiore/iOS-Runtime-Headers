// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYPEERSNAPSHOT_H
#define PFUBIQUITYPEERSNAPSHOT_H

@class NSDictionary, NSMutableDictionary, NSNumber, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "PFUbiquityKnowledgeVector.h"

@interface PFUbiquityPeerSnapshot : NSObject {
    NSDictionary *_logSnapshot;
    NSMutableDictionary *_diffFromPrevious;
    PFUbiquityKnowledgeVector *_kv;
    NSNumber *_transactionNumber;
    NSDate *_transactionDate;
    NSString *_exportingPeerID;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithExportingPeerID:(id)arg0 logSnapshot:(id)arg1 transactionNumber:(id)arg2 transactionDate:(id)arg3 andKnowledgeVector:(id)arg4 ;
-(id)initWithTranasctionEntry:(id)arg0 andLogSnapshot:(id)arg1 ;
-(void)dealloc;


@end


#endif