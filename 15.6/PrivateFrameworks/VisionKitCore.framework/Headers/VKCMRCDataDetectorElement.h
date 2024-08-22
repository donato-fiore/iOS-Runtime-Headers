// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCMRCDATADETECTORELEMENT_H
#define VKCMRCDATADETECTORELEMENT_H

@class NSArray, BCSAction, VNBarcodeObservation, NSString, UIMenu, UIViewController;
@protocol BCSActionDelegate, NSSecureCoding;


#import "VKCBaseDataDetectorElement.h"
#import "VKQuad.h"

@interface VKCMRCDataDetectorElement : VKCBaseDataDetectorElement <BCSActionDelegate, NSSecureCoding>

 {
    NSArray *_boundingQuads;
    NSArray *_children;
}


@property (retain, nonatomic) BCSAction *barcodeAction; // ivar: _barcodeAction
@property (retain, nonatomic) VNBarcodeObservation *barcodeObservation; // ivar: _barcodeObservation
@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) BOOL childrenCreated; // ivar: _childrenCreated
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIMenu *mrcMenu;
@property (weak, nonatomic) UIViewController *presentingViewControllerForMrcAction; // ivar: _presentingViewControllerForMrcAction
@property (retain, nonatomic) VKQuad *quad; // ivar: _quad
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isMRCDataDetector;
-(id)boundingQuads;
-(id)children;
-(id)debugMenu;
-(id)initWithBarcodeObservation:(id)arg0 action:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)presentingViewControllerForAction:(id)arg0 ;
-(id)scannerResult;
-(id)stringValue;
-(void)createChildrenIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif