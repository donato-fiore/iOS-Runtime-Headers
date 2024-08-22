// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MMELEMENT_H
#define MMELEMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MMElement.h"

@interface MMElement : NSObject

@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (copy, nonatomic) NSString *href; // ivar: _href
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *innerRanges; // ivar: _innerRanges
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSUInteger level; // ivar: _level
@property (weak, nonatomic) MMElement *parent; // ivar: _parent
@property (nonatomic) _NSRange range; // ivar: _range
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int type; // ivar: _type


-(id)description;
-(id)init;
-(id)removeLastChild;
-(void)addChild:(id)arg0 ;
-(void)addInnerRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)removeChild:(id)arg0 ;
-(void)removeLastInnerRange;


@end


#endif