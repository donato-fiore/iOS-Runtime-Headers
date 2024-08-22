// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDACCOUNTITEM_H
#define PKDASHBOARDACCOUNTITEM_H

@class PKAccount, NSString;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardAccountItem : NSObject <PKDashboardItem>



@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithAccount:(id)arg0 ;


@end


#endif