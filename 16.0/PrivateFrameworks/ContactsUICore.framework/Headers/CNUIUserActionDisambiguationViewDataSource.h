// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIUSERACTIONDISAMBIGUATIONVIEWDATASOURCE_H
#define CNUIUSERACTIONDISAMBIGUATIONVIEWDATASOURCE_H

@class NSString;
@protocol CNUIUserActionDisambiguationViewDataSource;


#import "CNUIUserActionListDataSource.h"

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracksChanges;


-(id)categoriesForContactActionsView:(id)arg0 ;
-(id)contactActionsView:(id)arg0 imageForActionCategory:(id)arg1 ;


@end


#endif