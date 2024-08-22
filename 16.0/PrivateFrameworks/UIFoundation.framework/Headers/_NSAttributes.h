// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSATTRIBUTES_H
#define _NSATTRIBUTES_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _NSAttributes : NSObject {
    NSDictionary *_attributes;
    _NSRange _range;
}




-(id)initWithAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)setAttributesInTextStorage:(id)arg0 ;


@end


#endif