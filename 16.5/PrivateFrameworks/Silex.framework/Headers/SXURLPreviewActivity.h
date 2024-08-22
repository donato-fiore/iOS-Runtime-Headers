// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXURLPREVIEWACTIVITY_H
#define SXURLPREVIEWACTIVITY_H

@class NSURL, NSString;
@protocol SXActionPreviewActivity, SXURLPreviewing;

#import <Foundation/Foundation.h>


@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSObject<SXURLPreviewing> *URLPreviewing; // ivar: _URLPreviewing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithURLPreviewing:(id)arg0 URL:(id)arg1 ;
-(id)previewViewControllerForAction:(id)arg0 ;
-(void)commitViewController:(id)arg0 action:(id)arg1 ;


@end


#endif