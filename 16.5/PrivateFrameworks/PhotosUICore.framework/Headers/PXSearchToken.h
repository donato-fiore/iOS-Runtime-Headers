// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHTOKEN_H
#define PXSEARCHTOKEN_H

@class NSAttributedString, UIImage, UISearchToken, NSString;

#import <Foundation/Foundation.h>

#import "PXSearchTokenRepresentedObject.h"

@interface PXSearchToken : NSObject

@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PXSearchTokenRepresentedObject *representedObject; // ivar: _representedObject
@property (retain, nonatomic) UISearchToken *searchObject; // ivar: _searchObject
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithAttributedText:(id)arg0 searchObject:(id)arg1 representedObject:(id)arg2 ;
-(id)initWithText:(id)arg0 image:(id)arg1 representedObject:(id)arg2 ;
-(id)initWithText:(id)arg0 searchObject:(id)arg1 representedObject:(id)arg2 ;


@end


#endif