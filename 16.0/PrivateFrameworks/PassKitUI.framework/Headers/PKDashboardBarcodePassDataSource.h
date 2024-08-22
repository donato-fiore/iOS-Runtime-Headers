// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDBARCODEPASSDATASOURCE_H
#define PKDASHBOARDBARCODEPASSDATASOURCE_H

@class PKGroup, NSString;
@protocol PKSecureElementObserver, PKDashboardPassDataSource, PKDashboardDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource>

 {
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id<PKDashboardDataSourceDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPassGroupView *groupView;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)footerTextItemForSection:(NSUInteger)arg0 ;
-(id)initWithGroupView:(id)arg0 context:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)groupViewDidChangeFrontmostPassView:(id)arg0 withContext:(id)arg1 ;
-(void)groupViewDidUpdatePassView:(id)arg0 ;
-(void)reloadData;
-(void)sendContentIsLoadedIfNecessary;
-(void)setDataSourceDelegate:(id)arg0 ;


@end


#endif