// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTLAYOUTRULES_H
#define SXCOMPONENTLAYOUTRULES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SXComponentLayoutRules : NSObject <NSCopying>



@property (nonatomic) BOOL allowsIntersection; // ivar: _allowsIntersection
@property (nonatomic) BOOL allowsSiblingBasedResizing; // ivar: _allowsSiblingBasedResizing
@property (nonatomic) NSUInteger minimumColumnSpan; // ivar: _minimumColumnSpan
@property (nonatomic) BOOL shouldIgnoreDocumentMargin; // ivar: _shouldIgnoreDocumentMargin
@property (nonatomic) BOOL shouldSpanAllColumns; // ivar: _shouldSpanAllColumns


+(id)bodyComponentLayoutRules;
+(id)defaultLayoutRules;
+(id)fullWidthLayoutRules;
+(id)twoColumnLayoutRules;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif