// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDPASSGROUPITEM_H
#define PKDASHBOARDPASSGROUPITEM_H

@class NSString, PKPeerPaymentAccount;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"

@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPassGroupView *groupView; // ivar: _groupView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithGroupView:(id)arg0 ;


@end


#endif