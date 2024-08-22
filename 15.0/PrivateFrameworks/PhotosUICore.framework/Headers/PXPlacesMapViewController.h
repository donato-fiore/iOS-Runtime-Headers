// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPVIEWCONTROLLER_H
#define PXPLACESMAPVIEWCONTROLLER_H

@class UIViewController, NSString, PXPlacesMapController, PKExtendedTraitCollection;
@protocol PXChangeObserver, PXPlacesMapControllerAccess;



@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPlacesMapController *mapController; // ivar: _mapController
@property (readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commonInit;
-(void)dealloc;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)sendTraitNotification;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif