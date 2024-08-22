// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSEARCHOCRTEXTLINECANDIDATE_H
#define PLSEARCHOCRTEXTLINECANDIDATE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PLSearchOCRTextLineCandidate : NSObject

@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSString *line; // ivar: _line
@property (readonly, nonatomic) NSArray *words; // ivar: _words


-(id)description;
-(id)initWithLine:(id)arg0 words:(id)arg1 confidence:(CGFloat)arg2 ;


@end


#endif