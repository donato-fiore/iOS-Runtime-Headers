// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDQUERYINTERACTIONADVISOR_H
#define _CDQUERYINTERACTIONADVISOR_H


#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"

@interface _CDQueryInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store; // ivar: _store


-(id)adviseInteractionsForKeywordsInString:(id)arg0 usingSettings:(id)arg1 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif