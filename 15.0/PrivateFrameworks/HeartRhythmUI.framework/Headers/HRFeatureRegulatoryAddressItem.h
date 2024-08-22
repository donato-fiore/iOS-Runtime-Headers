// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRFEATUREREGULATORYADDRESSITEM_H
#define HRFEATUREREGULATORYADDRESSITEM_H

@class NSString, NSAttributedString;
@protocol HRFeatureRegulatoryPanelDisplayable;

#import <Foundation/Foundation.h>


@interface HRFeatureRegulatoryAddressItem : NSObject <HRFeatureRegulatoryPanelDisplayable>



@property (readonly, nonatomic) NSInteger cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;


-(void)handleUserInteractionWithItemWithHostViewController:(id)arg0 ;


@end


#endif