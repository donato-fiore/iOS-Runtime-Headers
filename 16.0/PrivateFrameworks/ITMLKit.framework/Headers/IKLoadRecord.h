// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKLOADRECORD_H
#define IKLOADRECORD_H

@class NSURL, NSURLSessionDataTask, ISURLOperation, NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface IKLoadRecord : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (nonatomic) BOOL loadCompleted; // ivar: _loadCompleted
@property (retain, nonatomic) ISURLOperation *opertaion; // ivar: _opertaion
@property (retain, nonatomic) NSUUID *requestID; // ivar: _requestID
@property (retain, nonatomic) NSString *scriptStr; // ivar: _scriptStr




@end


#endif