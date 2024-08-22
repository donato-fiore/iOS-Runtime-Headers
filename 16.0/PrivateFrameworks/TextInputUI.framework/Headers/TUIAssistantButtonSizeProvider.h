// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIASSISTANTBUTTONSIZEPROVIDER_H
#define TUIASSISTANTBUTTONSIZEPROVIDER_H


#import <Foundation/Foundation.h>


@interface TUIAssistantButtonSizeProvider : NSObject

@property (nonatomic) CGFloat barButtonWidth; // ivar: _barButtonWidth


-(struct CGSize )_preferredTitleSizeForBarButtonItem:(id)arg0 ;
-(struct CGSize )preferredSizeForButtonBarItem:(id)arg0 ;


@end


#endif