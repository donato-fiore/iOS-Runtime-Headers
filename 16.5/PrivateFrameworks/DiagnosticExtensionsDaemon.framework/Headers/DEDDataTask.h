// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDDATATASK_H
#define DEDDATATASK_H

@class NSData, NSURLSessionDataTask, NSHTTPURLResponse;

#import <Foundation/Foundation.h>


@interface DEDDataTask : NSObject

@property (retain) NSData *data; // ivar: _data
@property (retain) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property BOOL isFinished; // ivar: _isFinished
@property (retain) NSHTTPURLResponse *response; // ivar: _response


-(id)description;
-(id)initWithDataTask:(id)arg0 ;


@end


#endif