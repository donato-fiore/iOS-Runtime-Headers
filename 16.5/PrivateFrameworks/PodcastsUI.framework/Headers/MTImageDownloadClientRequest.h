// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTIMAGEDOWNLOADCLIENTREQUEST_H
#define MTIMAGEDOWNLOADCLIENTREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTImageDownloadClientRequest : NSObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (readonly, nonatomic) NSString *url; // ivar: _url
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(id)requestForUrl:(id)arg0 key:(id)arg1 podcastUuid:(id)arg2 completion:(id)arg3 ;
-(id)description;
-(id)initWithUrl:(id)arg0 key:(id)arg1 podcastUuid:(id)arg2 completion:(id)arg3 ;


@end


#endif