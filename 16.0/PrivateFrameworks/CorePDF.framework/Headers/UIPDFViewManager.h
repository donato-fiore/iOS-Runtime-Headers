// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFVIEWMANAGER_H
#define UIPDFVIEWMANAGER_H

@class UIView;

#import <Foundation/Foundation.h>


@interface UIPDFViewManager : NSObject {
    UIView *_activeView;
}




+(id)sharedViewManager;
-(void)makeViewActive:(id)arg0 ;
-(void)viewReleased:(id)arg0 ;


@end


#endif