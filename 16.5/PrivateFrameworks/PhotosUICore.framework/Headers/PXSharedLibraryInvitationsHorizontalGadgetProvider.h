// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYINVITATIONSHORIZONTALGADGETPROVIDER_H
#define PXSHAREDLIBRARYINVITATIONSHORIZONTALGADGETPROVIDER_H

@class NSString, NSDate;
@protocol PXChangeObserver, PXForYouRankable;


#import "PXGadgetProvider.h"
#import "PXSharedLibraryStatusProvider.h"

@interface PXSharedLibraryInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXForYouRankable>

 {
    PXSharedLibraryStatusProvider *_statusProvider;
    BOOL _didGenerateGadgets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;


-(NSUInteger)estimatedNumberOfGadgets;
-(void)_updateGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif