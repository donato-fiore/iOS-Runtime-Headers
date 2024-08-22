// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDPASSTILESITEM_H
#define PKDASHBOARDPASSTILESITEM_H

@class NSString, PKPass, NSArray;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPassTilesItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tiles; // ivar: _tiles


+(id)identifier;


@end


#endif