// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTDATASOURCESAFEDELEGATE_H
#define CNCONTACTDATASOURCESAFEDELEGATE_H

@class NSString;
@protocol CNContactDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)contactDataSourceDidChange:(id)arg0 ;


@end


#endif