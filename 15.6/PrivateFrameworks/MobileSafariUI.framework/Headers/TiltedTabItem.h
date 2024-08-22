// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TILTEDTABITEM_H
#define TILTEDTABITEM_H

@class NSUUID, NSString, UIImage;
@protocol TabCollectionItem;

#import <Foundation/Foundation.h>

#import "TiltedTabItemLayoutInfo.h"
#import "TiltedTabView.h"

@interface TiltedTabItem : NSObject <TabCollectionItem>

 {
    TiltedTabItemLayoutInfo *_layoutInfo;
    TiltedTabView *_tiltedTabView;
}


@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dragState; // ivar: _dragState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif