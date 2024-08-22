// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRFEATUREREGULATORYREENABLEFEATUREITEM_H
#define HRFEATUREREGULATORYREENABLEFEATUREITEM_H

@class NSString, NSAttributedString;
@protocol HRFeatureRegulatoryPanelDisplayable, HRFeatureRegulatoryReenableFeatureActionDelegate;

#import <Foundation/Foundation.h>


@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable>



@property (readonly, nonatomic) NSInteger cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HRFeatureRegulatoryReenableFeatureActionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractive;
@property (nonatomic) NSString *productName; // ivar: _productName
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;


-(id)initWithProductName:(id)arg0 delegate:(id)arg1 ;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg0 ;


@end


#endif