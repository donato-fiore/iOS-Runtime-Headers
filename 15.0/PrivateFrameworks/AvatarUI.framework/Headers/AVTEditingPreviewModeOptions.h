// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTEDITINGPREVIEWMODEOPTIONS_H
#define AVTEDITINGPREVIEWMODEOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVTEditingPreviewModeOptions : NSObject

@property (readonly, nonatomic) NSString *bodyPosePack; // ivar: _bodyPosePack
@property (readonly, nonatomic) NSString *framingMode; // ivar: _framingMode


+(id)defaultOptions;
-(id)description;
-(id)initWithFramingMode:(id)arg0 bodyPosePack:(id)arg1 ;


@end


#endif