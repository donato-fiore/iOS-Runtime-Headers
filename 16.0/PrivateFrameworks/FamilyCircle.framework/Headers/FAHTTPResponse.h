// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAHTTPRESPONSE_H
#define FAHTTPRESPONSE_H

@class NSHTTPURLResponse;

#import <Foundation/Foundation.h>


@interface FAHTTPResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse; // ivar: _HTTPResponse
@property (readonly, nonatomic) id *body; // ivar: _body
@property (nonatomic) BOOL familyRefreshTriggered; // ivar: _familyRefreshTriggered


-(id)initWithHTTPResponse:(id)arg0 body:(id)arg1 ;
-(id)initWithHTTPResponse:(id)arg0 body:(id)arg1 familyRefreshTriggered:(BOOL)arg2 ;


@end


#endif