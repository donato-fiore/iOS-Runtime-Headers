// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPOSITIONEDATTRIBUTEDSTRING_H
#define _UIPOSITIONEDATTRIBUTEDSTRING_H

@class NSAttributedString;

#import <Foundation/Foundation.h>

#import "UITextPosition.h"

@interface _UIPositionedAttributedString : NSObject

@property (readonly, nonatomic) UITextPosition *position; // ivar: _position
@property (readonly, copy, nonatomic) NSAttributedString *string; // ivar: _string


+(id)attributedString:(id)arg0 atPosition:(id)arg1 ;
-(id)description;


@end


#endif