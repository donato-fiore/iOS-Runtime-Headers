// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINDEXBARENTRY_H
#define UIINDEXBARENTRY_H

@class NSString, NSIndexPath;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UIIndexBarEntry : NSObject

@property (readonly, nonatomic) NSString *effectiveShortTitle;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (copy, nonatomic) NSString *shortTitle; // ivar: _shortTitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(id)_dotImageInView:(id)arg0 ;
+(id)_externalDotImageInView:(id)arg0 ;
+(id)entryForDotInView:(id)arg0 ;
+(id)entryForNumbers;
+(id)entryForSearch;
+(id)entryWithTitle:(id)arg0 ;
+(id)entryWithType:(NSInteger)arg0 ;
-(id)description;


@end


#endif