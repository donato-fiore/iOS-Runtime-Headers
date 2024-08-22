// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUITEMPLATEIMAGEVIEW_H
#define SAUITEMPLATEIMAGEVIEW_H

@class NSString, NSArray;
@protocol SAUITemplateMonogrammable;


#import "SAUITemplateBaseItem.h"
#import "SAUIImageResource.h"

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>



@property (nonatomic) float alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) CGFloat imagePointHeight;
@property (nonatomic) CGFloat imagePointWidth;
@property (copy, nonatomic) NSArray *monogramName;
@property (copy, nonatomic) NSString *style;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *themeImages;


+(id)imageViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif