// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLGRIDSERVICESECTION_H
#define HUQUICKCONTROLGRIDSERVICESECTION_H

@class NSMutableArray, HFServiceItem;

#import <Foundation/Foundation.h>


@interface HUQuickControlGridServiceSection : NSObject

@property (retain, nonatomic) NSMutableArray *gridControlItems; // ivar: _gridControlItems
@property (retain, nonatomic) HFServiceItem *serviceItem; // ivar: _serviceItem
@property (retain, nonatomic) NSMutableArray *supplementaryControlItems; // ivar: _supplementaryControlItems


-(id)init;


@end


#endif