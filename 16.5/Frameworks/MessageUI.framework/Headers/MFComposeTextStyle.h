// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSETEXTSTYLE_H
#define MFCOMPOSETEXTSTYLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFComposeTextStyle : NSObject

@property (readonly, copy, nonatomic) NSString *accessibilityIdenitifier; // ivar: _accessibilityIdenitifier
@property (readonly, nonatomic) SEL editSelector; // ivar: _editSelector
@property (readonly, copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) NSInteger styleType; // ivar: _styleType


+(BOOL)isTextListStyleOrdered:(id)arg0 ;
+(SEL)editSelectorForTextStyleType:(NSInteger)arg0 ;
+(id)accessibilityIdenitifierForTextStyleType:(NSInteger)arg0 ;
+(id)composeTextStyleForTextStyleType:(NSInteger)arg0 ;
+(id)imageNameForTextStyleType:(NSInteger)arg0 ;
-(id)initWithTextStyleType:(NSInteger)arg0 ;


@end


#endif