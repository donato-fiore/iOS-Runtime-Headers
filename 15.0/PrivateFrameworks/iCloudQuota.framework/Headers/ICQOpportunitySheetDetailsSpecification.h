// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQOPPORTUNITYSHEETDETAILSSPECIFICATION_H
#define ICQOPPORTUNITYSHEETDETAILSSPECIFICATION_H

@class NSDictionary;


#import "ICQOpportunityFlowSpecification.h"

@interface ICQOpportunitySheetDetailsSpecification : ICQOpportunityFlowSpecification

@property (retain, nonatomic) NSDictionary *messagesInfo; // ivar: _messagesInfo


-(id)messageForKey:(id)arg0 ;
-(void)makeMessageFromServerDict:(id)arg0 ;


@end


#endif