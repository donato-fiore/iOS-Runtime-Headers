// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQOPPORTUNITYFLOWSPECIFICATION_H
#define ICQOPPORTUNITYFLOWSPECIFICATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "_ICQOpportunityBubbleImageDetails.h"

@interface ICQOpportunityFlowSpecification : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) _ICQOpportunityBubbleImageDetails *imageDetails; // ivar: _imageDetails
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithServerDictionary:(id)arg0 ;
-(void)makeActionsFromServerDict:(id)arg0 ;
-(void)makeMessageFromServerDict:(id)arg0 ;


@end


#endif