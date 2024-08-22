// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MMCSSIMPLEFILE_H
#define MMCSSIMPLEFILE_H

@class NSData, NSString, NSError, NSURL;

#import <Foundation/Foundation.h>


@interface MMCSSimpleFile : NSObject

@property (retain) NSData *authResponseData; // ivar: _authResponseData
@property (retain) NSString *authToken; // ivar: _authToken
@property NSInteger encryptionBehavior; // ivar: _encryptionBehavior
@property int fd; // ivar: _fd
@property (retain) NSData *fileHash; // ivar: _fileHash
@property (retain) NSString *guid; // ivar: _guid
@property NSUInteger itemID; // ivar: _itemID
@property (retain) NSString *localPath; // ivar: _localPath
@property (retain, setter=setMMCSError:) NSError *mmcsError; // ivar: _mmcsError
@property CGFloat progress; // ivar: _progress
@property NSUInteger protocolFileSize; // ivar: _protocolFileSize
@property (retain) NSURL *requestURL; // ivar: _requestURL
@property (retain) NSString *requestorID; // ivar: _requestorID
@property (retain) NSData *signature; // ivar: _signature


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif