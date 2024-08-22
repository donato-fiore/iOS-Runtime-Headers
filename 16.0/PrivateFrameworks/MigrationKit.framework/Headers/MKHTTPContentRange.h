// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKHTTPCONTENTRANGE_H
#define MKHTTPCONTENTRANGE_H


#import <Foundation/Foundation.h>


@interface MKHTTPContentRange : NSObject

@property (nonatomic) NSInteger length; // ivar: _length
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (nonatomic) NSInteger total; // ivar: _total


-(id)initWithHeaderValue:(id)arg0 ;


@end


#endif