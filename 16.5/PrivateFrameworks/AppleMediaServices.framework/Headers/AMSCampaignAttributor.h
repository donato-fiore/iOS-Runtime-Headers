// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCAMPAIGNATTRIBUTOR_H
#define AMSCAMPAIGNATTRIBUTOR_H

@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface AMSCampaignAttributor : NSObject

@property (nonatomic, readonly) NSObject<AMSBagProtocol> *bag; // ivar: bag


-(id)init;
-(id)initWithBag:(id)arg0 ;


@end


#endif