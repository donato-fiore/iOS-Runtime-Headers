// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLDATAINSTANCELOCATOR_H
#define NLDATAINSTANCELOCATOR_H


#import <Foundation/Foundation.h>


@interface NLDataInstanceLocator : NSObject {
    NSUInteger _instanceIndex;
    _NSRange _rangeOfCharacters;
    _NSRange _rangeOfTokens;
}


@property (readonly) NSUInteger instanceIndex;
@property (readonly) _NSRange rangeOfCharacters;
@property (readonly) _NSRange rangeOfTokens;


-(id)description;
-(id)initWithInstanceIndex:(NSUInteger)arg0 rangeOfCharacters:(struct _NSRange )arg1 rangeOfTokens:(struct _NSRange )arg2 ;


@end


#endif