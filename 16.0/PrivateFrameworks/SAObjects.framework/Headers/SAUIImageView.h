// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIIMAGEVIEW_H
#define SAUIIMAGEVIEW_H

@class NSArray, NSString, NSNumber;


#import "SAAceView.h"
#import "SAUIImageResource.h"

@interface SAUIImageView : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSNumber *tintColor;


+(id)imageViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif