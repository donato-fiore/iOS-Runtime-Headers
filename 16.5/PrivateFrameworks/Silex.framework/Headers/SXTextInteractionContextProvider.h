// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTINTERACTIONCONTEXTPROVIDER_H
#define SXTEXTINTERACTIONCONTEXTPROVIDER_H

@class NSString;
@protocol SXInteractionContextProviding, SXActionManager;

#import <Foundation/Foundation.h>

#import "SXTangierController.h"

@interface SXTextInteractionContextProvider : NSObject <SXInteractionContextProviding>



@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTangierController *tangierController; // ivar: _tangierController


-(id)contextMenuAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 ;
-(id)initWithTangierController:(id)arg0 actionManager:(id)arg1 ;
-(id)targetedPreviewAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 ;
-(id)toolTipAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 ;
-(struct CGRect )viewportRectForLinkInRep:(id)arg0 range:(struct _NSRange )arg1 viewport:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)repAndHyperlinkAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 block:(id)arg2 ;


@end


#endif