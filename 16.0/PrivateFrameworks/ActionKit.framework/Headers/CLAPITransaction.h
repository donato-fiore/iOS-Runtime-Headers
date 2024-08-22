// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLAPITRANSACTION_H
#define CLAPITRANSACTION_H

@class NSURLConnection, NSString, NSMutableData, NSURLRequest, NSHTTPURLResponse;

#import <Foundation/Foundation.h>


@interface CLAPITransaction : NSObject

@property (retain, nonatomic) NSURLConnection *connection; // ivar: _connection
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) id *internalContext; // ivar: _internalContext
@property (retain, nonatomic) NSMutableData *receivedData; // ivar: _receivedData
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (retain, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(id)transaction;
-(id)init;
-(void)dealloc;


@end


#endif