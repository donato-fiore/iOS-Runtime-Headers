// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAHTTPRESPONSE_H
#define FAHTTPRESPONSE_H

@class NSHTTPURLResponse;

#import <Foundation/Foundation.h>


@interface FAHTTPResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse; // ivar: _HTTPResponse
@property (readonly, nonatomic) id *body; // ivar: _body


-(id)initWithHTTPResponse:(id)arg0 body:(id)arg1 ;


@end


#endif