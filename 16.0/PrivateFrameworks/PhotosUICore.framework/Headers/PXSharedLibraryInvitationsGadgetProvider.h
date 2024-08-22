// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYINVITATIONSGADGETPROVIDER_H
#define PXSHAREDLIBRARYINVITATIONSGADGETPROVIDER_H

@class NSString;
@protocol PXChangeObserver, PXSharedLibrary;


#import "PXGadgetProvider.h"
#import "PXSharedLibraryStatusProvider.h"

@interface PXSharedLibraryInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver>

 {
    PXSharedLibraryStatusProvider *_statusProvider;
    id<PXSharedLibrary> *_invitation;
    BOOL _didGenerateGadgets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)estimatedNumberOfGadgets;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_updateGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif