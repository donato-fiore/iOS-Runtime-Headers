// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSTRINGTRANSFORMATION_H
#define TTSSTRINGTRANSFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TTSStringTransformation : NSObject

@property (nonatomic) _NSRange finalRange; // ivar: _finalRange
@property (nonatomic) NSUInteger offsetFromEnd; // ivar: _offsetFromEnd
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *replacement; // ivar: _replacement


-(NSInteger)sizeDelta;
-(id)initWithRange:(struct _NSRange )arg0 andReplacement:(id)arg1 ;


@end


#endif