// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKMULTIPARTSTRINGCOMPONENT_H
#define _MKMULTIPARTSTRINGCOMPONENT_H

@class NSAttributedString;

#import <Foundation/Foundation.h>


@interface _MKMultiPartStringComponent : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) _NSRange originalRange; // ivar: _originalRange
@property (nonatomic) _NSRange range; // ivar: _range


-(id)description;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif