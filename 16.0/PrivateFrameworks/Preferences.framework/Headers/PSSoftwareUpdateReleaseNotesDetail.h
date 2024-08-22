// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSOFTWAREUPDATERELEASENOTESDETAIL_H
#define PSSOFTWAREUPDATERELEASENOTESDETAIL_H

@class NSString;
@protocol UIWebViewDelegate;


#import "PSListController.h"

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *releaseNotes; // ivar: _releaseNotes
@property (readonly) Class superclass;


-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(id)init;
-(id)specifiers;
-(void)loadView;


@end


#endif