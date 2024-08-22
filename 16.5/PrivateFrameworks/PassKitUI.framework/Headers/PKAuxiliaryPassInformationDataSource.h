// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUXILIARYPASSINFORMATIONDATASOURCE_H
#define PKAUXILIARYPASSINFORMATIONDATASOURCE_H

@class NSString, NSIndexPath, PKPassAuxiliaryPassInformationItem, PKMerchant;
@protocol PKDashboardDataSource, PKDashboardDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface PKAuxiliaryPassInformationDataSource : NSObject <PKDashboardDataSource>

 {
    BOOL _contentIsLoaded;
    id<PKDashboardDataSourceDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *footerSecondaryText;
@property (readonly, nonatomic) NSString *footerSecondaryTitle;
@property (readonly, nonatomic) NSString *footerText;
@property (readonly, nonatomic) NSString *footerTitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *headerIndexPath; // ivar: _headerIndexPath
@property (readonly, nonatomic) PKPassAuxiliaryPassInformationItem *item; // ivar: _item
@property (readonly, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (readonly) Class superclass;


-(BOOL)_isDynamicSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_headerItem;
-(id)footerTextItemForSection:(NSUInteger)arg0 ;
-(id)initWithItem:(id)arg0 forPass:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)navigationBarTitle;
-(id)titleForSection:(NSUInteger)arg0 ;
-(void)_loadMerchantForPassUniqueID:(id)arg0 ;
-(void)_notifyContentLoadedIfNecessary;
-(void)setDataSourceDelegate:(id)arg0 ;


@end


#endif