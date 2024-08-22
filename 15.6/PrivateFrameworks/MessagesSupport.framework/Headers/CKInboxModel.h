// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKINBOXMODEL_H
#define CKINBOXMODEL_H

@class NSDictionary, NSArray;
@protocol CKInboxModelDelegate;

#import <Foundation/Foundation.h>


@interface CKInboxModel : NSObject

@property (weak, nonatomic) NSObject<CKInboxModelDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *footerAction; // ivar: _footerAction
@property (retain, nonatomic) NSDictionary *itemsMap; // ivar: _itemsMap
@property (copy, nonatomic) id *logInboxViewedMetric; // ivar: _logInboxViewedMetric
@property (retain, nonatomic) NSArray *sections; // ivar: _sections


-(id)buildItemsMap:(id)arg0 ;
-(id)initWithSections:(id)arg0 footerAction:(id)arg1 ;
-(void)setIsCollapsed:(BOOL)arg0 ;


@end


#endif