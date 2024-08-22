// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONTACTSCORER_H
#define PPCONTACTSCORER_H


#import <Foundation/Foundation.h>


@interface PPContactScorer : NSObject



+(id)mostRelevantContactsWithName:(id)arg0 store:(id)arg1 ;
+(id)mostRelevantContactsWithStore:(id)arg0 ;
+(id)mostRelevantContactsWithStore:(id)arg0 shouldContinueBlock:(id)arg1 ;
+(id)scoredContactsWithContacts:(id)arg0 ;
+(void)scoreContactNameRecords:(id)arg0 ;


@end


#endif