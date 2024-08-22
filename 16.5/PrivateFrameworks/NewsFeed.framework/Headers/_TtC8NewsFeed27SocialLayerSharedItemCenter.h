// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED27SOCIALLAYERSHAREDITEMCENTER_H
#define _TTC8NEWSFEED27SOCIALLAYERSHAREDITEMCENTER_H

@protocol SLHighlightCenterDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed27SocialLayerSharedItemCenter : NSObject <SLHighlightCenterDelegate>

 {
    ? lazyHighlightCenter;
    ? delegate;
}




-(id)init;
-(void)highlightCenter:(id)arg0 didRemoveHighlights:(id)arg1 ;
-(void)highlightCenterDidAddHighlights:(id)arg0 ;


@end


#endif