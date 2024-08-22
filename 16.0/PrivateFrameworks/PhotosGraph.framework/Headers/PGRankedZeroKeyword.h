// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGRANKEDZEROKEYWORD_H
#define PGRANKEDZEROKEYWORD_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PGRankedZeroKeyword : NSObject

@property (readonly) CGFloat score; // ivar: _score
@property (readonly) NSDictionary *zeroKeyword; // ivar: _zeroKeyword


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithKeyword:(id)arg0 score:(CGFloat)arg1 ;


@end


#endif