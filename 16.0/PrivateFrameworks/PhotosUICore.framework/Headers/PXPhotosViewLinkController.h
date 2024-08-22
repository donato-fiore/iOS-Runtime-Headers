// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSVIEWLINKCONTROLLER_H
#define PXPHOTOSVIEWLINKCONTROLLER_H

@class NSString, NSArray;
@protocol PXChangeObserver, PXPhotosViewLinkControllerDelegate;

#import <Foundation/Foundation.h>


@interface PXPhotosViewLinkController : NSObject <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PXPhotosViewLinkControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class linkHelper; // ivar: _linkHelper
@property (retain, nonatomic) NSArray *registeredSelectionInteractions; // ivar: _registeredSelectionInteractions
@property (readonly) Class superclass;


+(id)linkControllerFromCuratedLibraryViewModel:(id)arg0 delegate:(id)arg1 ;
+(id)linkControllerFromViewModel:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_unregisterCurrentInteractions;
-(void)dealloc;
-(void)handleSelectModeChanged:(BOOL)arg0 selectionManager:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)replaceInteractionsFromSelectionManager:(id)arg0 ;


@end


#endif