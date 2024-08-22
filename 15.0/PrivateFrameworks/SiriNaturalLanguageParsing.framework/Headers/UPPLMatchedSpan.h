// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPLMATCHEDSPAN_H
#define UPPLMATCHEDSPAN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UPPLMatchedSpan : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) _NSRange tokenIndicesIndex; // ivar: _tokenIndicesIndex


-(id)dictionaryRepresentation;
-(id)initWithLabel:(id)arg0 tokenIndicesIndex:(struct _NSRange )arg1 ;


@end


#endif