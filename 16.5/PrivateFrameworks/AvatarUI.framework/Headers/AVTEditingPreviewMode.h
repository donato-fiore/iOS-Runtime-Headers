// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTEDITINGPREVIEWMODE_H
#define AVTEDITINGPREVIEWMODE_H


#import <Foundation/Foundation.h>

#import "AVTEditingPreviewModeOptions.h"

@interface AVTEditingPreviewMode : NSObject

@property (readonly, nonatomic) AVTEditingPreviewModeOptions *options; // ivar: _options
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)previewModeTypeForString:(id)arg0 ;
+(id)defaultPreviewMode;
+(id)stringForPreviewModeType:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 options:(id)arg1 ;


@end


#endif