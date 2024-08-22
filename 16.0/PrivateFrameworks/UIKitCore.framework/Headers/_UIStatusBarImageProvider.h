// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARIMAGEPROVIDER_H
#define _UISTATUSBARIMAGEPROVIDER_H


#import <Foundation/Foundation.h>


@interface _UIStatusBarImageProvider : NSObject



+(id)sharedProvider;
-(BOOL)_suppressHairlineThickeningForImageName:(id)arg0 styleAttributes:(id)arg1 ;
-(id)imageNamed:(id)arg0 styleAttributes:(id)arg1 ;
-(struct UIEdgeInsets )_alignmentInsetsForImageNamed:(id)arg0 styleAttributes:(id)arg1 ;


@end


#endif