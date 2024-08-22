// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITITLECONTENT_H
#define _UITITLECONTENT_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface _UITitleContent : NSObject {
    NSAttributedString *_attributedText;
}


@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(id)contentWithTitle:(id)arg0 attributes:(id)arg1 button:(id)arg2 ;
-(id)description;
-(void)updateWithButton:(id)arg0 ;
-(void)updateWithTitleAttributes:(id)arg0 button:(id)arg1 ;


@end


#endif