// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDPEERPAYMENTACTIONITEM_H
#define PKDASHBOARDPEERPAYMENTACTIONITEM_H

@class NSString;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPeerPaymentActionItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)identifier;
+(id)itemWithType:(NSUInteger)arg0 enabled:(BOOL)arg1 ;


@end


#endif