// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FKAPPLEPAYORDERROWVIEWMODEL_H
#define FKAPPLEPAYORDERROWVIEWMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FKApplePayOrderRowViewModel : NSObject

@property (readonly, copy, nonatomic) id *cellConfigurationHandler; // ivar: _cellConfigurationHandler
@property (readonly, copy, nonatomic) NSString *fulfillmentIdentifier; // ivar: _fulfillmentIdentifier
@property (readonly, copy, nonatomic) NSString *orderIdentifier; // ivar: _orderIdentifier
@property (readonly, copy, nonatomic) NSString *orderTypeIdentifier; // ivar: _orderTypeIdentifier
@property (readonly, copy, nonatomic) NSString *subtitleText;
@property (readonly, copy, nonatomic) NSString *titleText;


-(id)initWithOrderTypeIdentifier:(id)arg0 orderIdentifier:(id)arg1 fulfillmentIdentifier:(id)arg2 cellConfigurationHandler:(id)arg3 ;
-(void)configureCell:(id)arg0 ;


@end


#endif