// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKHIGHLIGHTAPPEARANCEHELPER_H
#define AKHIGHLIGHTAPPEARANCEHELPER_H


#import <Foundation/Foundation.h>


@interface AKHighlightAppearanceHelper : NSObject



+(BOOL)highlightColor:(id)arg0 isEquivalentToHighlightColor:(id)arg1 ;
+(NSInteger)attributeTagForHighlightOfColor:(id)arg0 ;
+(NSInteger)attributeTagForNoteOfColor:(id)arg0 ;
+(id)borderColorForNoteOfHighlightAttributeTag:(NSInteger)arg0 ;
+(id)colorForHighlightAttributeWithTag:(NSInteger)arg0 ;
+(id)colorForNoteOfHighlightAttributeTag:(NSInteger)arg0 ;
+(int)annotationStyleForHighlightAttributeWithTag:(NSInteger)arg0 ;


@end


#endif