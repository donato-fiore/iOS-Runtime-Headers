// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI21ACTIONPREVIEWACTIVITY_H
#define _TTC8STOCKSUI21ACTIONPREVIEWACTIVITY_H

@protocol SXActionPreviewActivity;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI21ActionPreviewActivity : NSObject <SXActionPreviewActivity>

 {
    ? router;
    ? handler;
    ? linkedContentProvider;
}




-(id)init;
-(id)previewViewControllerForAction:(id)arg0 ;
-(void)commitViewController:(id)arg0 action:(id)arg1 ;


@end


#endif