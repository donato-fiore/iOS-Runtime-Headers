// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEDIAREQUESTDETAILS_H
#define CKMEDIAREQUESTDETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKMediaRequestDetails : NSObject

@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) NSString *transferGUID; // ivar: _transferGUID


-(id)initWithRequestID:(NSInteger)arg0 transferGUID:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif