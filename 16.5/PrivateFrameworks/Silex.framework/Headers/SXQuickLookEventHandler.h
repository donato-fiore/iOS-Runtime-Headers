// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXQUICKLOOKEVENTHANDLER_H
#define SXQUICKLOOKEVENTHANDLER_H

@class NSString;
@protocol SXQuickLookInteractorDelegate, SXQuickLookEventHandler, SXQuickLookEventHandlerDelegate, SXQuickLookInteractor, SXQuickLookRouter;

#import <Foundation/Foundation.h>


@interface SXQuickLookEventHandler : NSObject <SXQuickLookInteractorDelegate, SXQuickLookEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXQuickLookEventHandlerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXQuickLookInteractor> *interactor; // ivar: _interactor
@property (readonly, nonatomic) NSObject<SXQuickLookRouter> *router; // ivar: _router
@property (readonly) Class superclass;


-(id)initWithInteractor:(id)arg0 router:(id)arg1 ;
-(void)didLoadThumbnail:(id)arg0 ;
-(void)didTapThumbnailView:(id)arg0 ;
-(void)failedToLoadThumbnail;
-(void)requestThumbnailWithSize:(struct CGSize )arg0 ;


@end


#endif