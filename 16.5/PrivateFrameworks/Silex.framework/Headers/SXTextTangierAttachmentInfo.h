// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTTANGIERATTACHMENTINFO_H
#define SXTEXTTANGIERATTACHMENTINFO_H

@class TSDDrawableInfo;


#import "SXTextExclusionPath.h"

@interface SXTextTangierAttachmentInfo : TSDDrawableInfo

@property (nonatomic) _NSRange actualRange; // ivar: _actualRange
@property (retain, nonatomic) SXTextExclusionPath *exclusionPath; // ivar: _exclusionPath


-(Class)layoutClass;
-(Class)repClass;


@end


#endif