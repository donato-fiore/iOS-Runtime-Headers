// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPASSAUXILIARYPASSINFORMATIONITEM_H
#define PKDASHBOARDPASSAUXILIARYPASSINFORMATIONITEM_H

@class NSString, PKPassAuxiliaryPassInformationItem;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPassAuxiliaryPassInformationItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPassAuxiliaryPassInformationItem *item; // ivar: _item
@property (readonly) Class superclass;


+(id)identifier;


@end


#endif