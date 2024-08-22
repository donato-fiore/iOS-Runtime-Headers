// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDCELLBACKGROUNDDISPLAYOPTIONS_H
#define HUGRIDCELLBACKGROUNDDISPLAYOPTIONS_H

@class NSString;
@protocol HUGridDisplayOptions, NSCopying;

#import <Foundation/Foundation.h>


@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying>



@property (nonatomic) NSUInteger contentColorStyle; // ivar: _contentColorStyle
@property (nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly, nonatomic) CGFloat gutter;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif