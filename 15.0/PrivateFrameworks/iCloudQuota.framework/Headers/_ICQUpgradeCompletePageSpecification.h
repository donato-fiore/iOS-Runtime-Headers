// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQUPGRADECOMPLETEPAGESPECIFICATION_H
#define _ICQUPGRADECOMPLETEPAGESPECIFICATION_H

@class ICQPageSpecification, NSString;


#import "ICQLink.h"

@interface _ICQUpgradeCompletePageSpecification : ICQPageSpecification

@property (retain, nonatomic) ICQLink *doneLink; // ivar: _doneLink
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)upgradeCompletePageSpecificationSampleForLevel:(NSInteger)arg0 ;
-(BOOL)hasCancelButtonForBack;
-(id)pageIdentifier;


@end


#endif