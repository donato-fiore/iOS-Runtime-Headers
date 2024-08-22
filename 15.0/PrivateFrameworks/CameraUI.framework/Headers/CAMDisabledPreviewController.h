// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMDISABLEDPREVIEWCONTROLLER_H
#define CAMDISABLEDPREVIEWCONTROLLER_H

@class NSMutableSet;
@protocol CAMDisabledPreviewControllerDelegate;

#import <Foundation/Foundation.h>


@interface CAMDisabledPreviewController : NSObject

@property (readonly, nonatomic) NSMutableSet *_reasonsForDisablingPreview; // ivar: __reasonsForDisablingPreview
@property (weak, nonatomic) NSObject<CAMDisabledPreviewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isPreviewDisabled) BOOL previewDisabled;


-(id)_descriptionForReasons:(id)arg0 ;
-(id)_descriptionStringForReason:(NSInteger)arg0 ;
-(id)init;
-(void)addDisabledPreviewReason:(NSInteger)arg0 ;
-(void)removeDisabledPreviewReason:(NSInteger)arg0 ;


@end


#endif