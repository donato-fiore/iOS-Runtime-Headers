// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKRANKEDRESPONSE_H
#define RKRANKEDRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RKRankedResponse : NSObject

@property NSUInteger inputMethod; // ivar: _inputMethod
@property (retain) NSString *response; // ivar: _response
@property CGFloat score; // ivar: _score


-(id)initWithResponse:(id)arg0 inputMethod:(NSUInteger)arg1 score:(CGFloat)arg2 ;


@end


#endif