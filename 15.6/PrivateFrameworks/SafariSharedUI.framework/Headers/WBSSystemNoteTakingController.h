// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSYSTEMNOTETAKINGCONTROLLER_H
#define WBSSYSTEMNOTETAKINGCONTROLLER_H

@class SYLinkContextClient, NSCache, SYNotesActivationObserver, NSString;
@protocol SYLinkContextClientDelegate, WBSSystemNoteTakingControllerDelegate;

#import <Foundation/Foundation.h>


@interface WBSSystemNoteTakingController : NSObject <SYLinkContextClientDelegate>

 {
    SYLinkContextClient *_linkContextClient;
    NSCache *_cachedCanonicalURLStringForWebPageURLString;
    SYNotesActivationObserver *_notesActivationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSSystemNoteTakingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isNotesPIPVisible; // ivar: _isNotesPIPVisible
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_isSystemNoteTakingEnabledForSafari) BOOL systemNoteTakingEnabledForSafari;


-(BOOL)_isSystemNoteTakingEnabled;
-(BOOL)isNoteTakingSupportedWithPrivateBrowsing:(BOOL)arg0 ;
-(id)init;
-(id)userActivityForNoteTaking:(id)arg0 ;
-(void)_insertLinkContextInfo:(id)arg0 userActivity:(id)arg1 ;
-(void)_insertLinkContextPreview:(id)arg0 userActivity:(id)arg1 ;
-(void)_setUpNotesVisibilityObserver;
-(void)_updateNotesPIPVisibility:(BOOL)arg0 ;
-(void)applyHighlightInUserActivity:(id)arg0 webView:(id)arg1 ;
-(void)cacheCanonicalURL:(id)arg0 forWebPageURL:(id)arg1 ;
-(void)fetchHighlightsForUserActivity:(id)arg0 privateBrowsing:(BOOL)arg1 completion:(id)arg2 ;
-(void)insertCanonicalURLIfAvailableForUserActivity:(id)arg0 ;
-(void)saveHighlightsData:(id)arg0 selectedText:(id)arg1 selectedImage:(id)arg2 newGroup:(BOOL)arg3 originatedInApp:(BOOL)arg4 webView:(id)arg5 userActivity:(id)arg6 ;
-(void)userWillAddLinkWithActivity:(id)arg0 completion:(id)arg1 ;


@end


#endif