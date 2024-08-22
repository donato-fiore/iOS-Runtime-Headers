// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYALERTCONFIGURATION_H
#define PXSTORYALERTCONFIGURATION_H

@class NSArray, NSString, UIView;

#import <Foundation/Foundation.h>


@interface PXStoryAlertConfiguration : NSObject

@property (retain, nonatomic) NSArray *actionTitles; // ivar: _actionTitles
@property (nonatomic) BOOL appendCancelAction; // ivar: _appendCancelAction
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) BOOL preferActionSheetStyle; // ivar: _preferActionSheetStyle
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) NSString *title; // ivar: _title




@end


#endif