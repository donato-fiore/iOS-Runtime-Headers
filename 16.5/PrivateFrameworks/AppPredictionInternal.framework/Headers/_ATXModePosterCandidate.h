// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXMODEPOSTERCANDIDATE_H
#define _ATXMODEPOSTERCANDIDATE_H

@class ATXPosterDescriptor, NSString;

#import <Foundation/Foundation.h>


@interface _ATXModePosterCandidate : NSObject

@property (readonly, nonatomic) ATXPosterDescriptor *descriptor; // ivar: _descriptor
@property (readonly, copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) BOOL isPreferredForGallery; // ivar: _isPreferredForGallery


-(id)initWithDescriptor:(id)arg0 fontName:(id)arg1 isPreferredForGallery:(BOOL)arg2 ;


@end


#endif