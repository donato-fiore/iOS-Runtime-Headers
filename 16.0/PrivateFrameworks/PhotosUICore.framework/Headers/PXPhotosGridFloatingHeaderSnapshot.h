// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSGRIDFLOATINGHEADERSNAPSHOT_H
#define PXPHOTOSGRIDFLOATINGHEADERSNAPSHOT_H

@class NSString, NSAttributedString;
@protocol PXPhotosGridFloatingHeaderInfo;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionReference.h"

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo>



@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (readonly, nonatomic) NSUInteger buttonActionType; // ivar: _buttonActionType
@property (readonly, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger floatingButtonActionType;
@property (readonly, nonatomic) NSString *floatingButtonTitle;
@property (readonly, nonatomic) BOOL floatingEnableOverview;
@property (readonly, nonatomic) NSAttributedString *floatingSummarySubtitle;
@property (readonly, nonatomic) NSAttributedString *floatingSummaryTitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSAttributedString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSAttributedString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 buttonTitle:(id)arg2 buttonActionType:(NSUInteger)arg3 assetCollectionReference:(id)arg4 ;


@end


#endif