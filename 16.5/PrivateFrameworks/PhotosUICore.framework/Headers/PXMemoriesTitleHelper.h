// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESTITLEHELPER_H
#define PXMEMORIESTITLEHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXMemoriesTitleHelper : NSObject

@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) NSInteger preferredLineLength; // ivar: _preferredLineLength
@property (copy, nonatomic) NSString *softLineBreak; // ivar: _softLineBreak
@property (copy, nonatomic) NSString *truncationToken; // ivar: _truncationToken


+(id)defaultHelper;
-(BOOL)_isTextLongerThanPreferredLine:(id)arg0 range:(struct _NSRange )arg1 minimumScaleFactor:(CGFloat)arg2 ;
-(id)displayableTextForTitle:(id)arg0 intent:(NSInteger)arg1 ;
-(id)init;
-(id)titleForDisplayableText:(id)arg0 titleCategory:(NSInteger)arg1 options:(NSUInteger)arg2 ;


@end


#endif