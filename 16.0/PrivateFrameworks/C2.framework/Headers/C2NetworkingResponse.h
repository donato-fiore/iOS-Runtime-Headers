// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2NETWORKINGRESPONSE_H
#define C2NETWORKINGRESPONSE_H

@class NSData, NSHTTPURLResponse;

#import <Foundation/Foundation.h>


@interface C2NetworkingResponse : NSObject

@property (readonly, copy, nonatomic) NSData *body; // ivar: _body
@property (readonly, copy, nonatomic) NSHTTPURLResponse *urlResponse; // ivar: _urlResponse


+(id)responseFromRequest:(id)arg0 statusCode:(NSInteger)arg1 headerFields:(id)arg2 body:(id)arg3 ;
+(id)responseWithURLResponse:(id)arg0 body:(id)arg1 ;


@end


#endif