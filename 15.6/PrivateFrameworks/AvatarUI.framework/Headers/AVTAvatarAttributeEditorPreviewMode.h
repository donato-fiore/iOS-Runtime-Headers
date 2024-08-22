// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARATTRIBUTEEDITORPREVIEWMODE_H
#define AVTAVATARATTRIBUTEEDITORPREVIEWMODE_H


#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorPreviewModeOptions.h"

@interface AVTAvatarAttributeEditorPreviewMode : NSObject

@property (readonly, nonatomic) AVTAvatarAttributeEditorPreviewModeOptions *options; // ivar: _options
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)attributeEditorPreviewModeTypeForEditingPreviewModeType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 options:(id)arg1 ;


@end


#endif