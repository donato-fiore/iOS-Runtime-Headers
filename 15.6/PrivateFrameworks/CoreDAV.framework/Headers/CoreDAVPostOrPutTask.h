// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVPOSTORPUTTASK_H
#define COREDAVPOSTORPUTTASK_H

@class NSString, NSURL, NSData;


#import "CoreDAVActionBackedTask.h"

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}


@property (nonatomic) int absoluteOrder; // ivar: _absoluteOrder
@property (nonatomic) BOOL forceToServer; // ivar: _forceToServer
@property (retain, nonatomic) NSString *previousETag; // ivar: _previousETag
@property (retain, nonatomic) NSURL *priorOrderedURL; // ivar: _priorOrderedURL
@property (retain, nonatomic) NSString *requestDataContentType; // ivar: _requestDataContentType
@property (retain, nonatomic) NSData *requestDataPayload; // ivar: _requestDataPayload


-(id)additionalHeaderValues;
-(id)description;
-(id)initWithDataPayload:(id)arg0 dataContentType:(id)arg1 atURL:(id)arg2 previousETag:(id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;


@end


#endif