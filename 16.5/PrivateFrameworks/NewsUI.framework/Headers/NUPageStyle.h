// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUPAGESTYLE_H
#define NUPAGESTYLE_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface NUPageStyle : NSObject

@property (nonatomic) BOOL hideToolbar; // ivar: _hideToolbar
@property (copy, nonatomic) NSString *nextButtonTitle; // ivar: _nextButtonTitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIImage *titleImage; // ivar: _titleImage


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif