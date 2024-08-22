// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTEXTTHUMBNAILRENDERER_H
#define QLTEXTTHUMBNAILRENDERER_H


#import <Foundation/Foundation.h>


@interface QLTextThumbnailRenderer : NSObject



+(id)_readingOptionsFromContentType:(id)arg0 encoding:(unsigned int)arg1 ;
+(id)mutableAttributedStringForThumbnailWithData:(id)arg0 contentType:(id)arg1 encoding:(unsigned int)arg2 documentAttributes:(*id)arg3 ;
+(id)mutableAttributedStringForThumbnailWithURL:(id)arg0 documentAttributes:(*id)arg1 ;
+(id)textDocumentTypeFromContentType:(id)arg0 ;


@end


#endif