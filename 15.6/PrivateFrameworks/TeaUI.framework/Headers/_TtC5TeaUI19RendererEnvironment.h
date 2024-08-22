// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5TEAUI19RENDERERENVIRONMENT_H
#define _TTC5TEAUI19RENDERERENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface _TtC5TeaUI19RendererEnvironment : NSObject {
    ? scrollView;
    ? isTesting;
    ? isLiveResizing;
}




-(id)init;
-(void)didEndLiveResizing:(id)arg0 ;
-(void)didStartLiveResizing:(id)arg0 ;


@end


#endif