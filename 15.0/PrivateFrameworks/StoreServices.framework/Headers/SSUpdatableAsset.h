// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSUPDATABLEASSET_H
#define SSUPDATABLEASSET_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SSUpdatableAsset : NSObject

@property (retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL; // ivar: _cacheURL
@property (copy, nonatomic, setter=_setMD5:) NSString *md5; // ivar: _md5
@property (copy, nonatomic, setter=_setName:) NSString *name; // ivar: _name
@property (retain, nonatomic, setter=_setServerURL:) NSURL *serverURL; // ivar: _serverURL
@property (copy, nonatomic, setter=_setVersion:) NSString *version; // ivar: _version




@end


#endif