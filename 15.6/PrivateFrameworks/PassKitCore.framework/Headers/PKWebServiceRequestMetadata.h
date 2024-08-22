// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKWEBSERVICEREQUESTMETADATA_H
#define PKWEBSERVICEREQUESTMETADATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PKWebServiceRequestMetadata : NSObject

@property (nonatomic) BOOL authHandling; // ivar: _authHandling
@property (nonatomic) BOOL cacheResponse; // ivar: _cacheResponse
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSData *originalBody; // ivar: _originalBody
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData
@property (nonatomic) NSInteger retries; // ivar: _retries




@end


#endif