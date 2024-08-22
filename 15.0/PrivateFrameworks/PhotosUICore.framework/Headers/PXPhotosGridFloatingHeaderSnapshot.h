// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDFLOATINGHEADERSNAPSHOT_H
#define PXPHOTOSGRIDFLOATINGHEADERSNAPSHOT_H

@class NSString, NSAttributedString;
@protocol PXPhotosGridFloatingHeaderInfo;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionReference.h"

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo>



@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL floatingEnableOverview;
@property (readonly, nonatomic) NSAttributedString *floatingSummarySubtitle;
@property (readonly, nonatomic) NSAttributedString *floatingSummaryTitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSAttributedString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSAttributedString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 assetCollectionReference:(id)arg2 ;


@end


#endif