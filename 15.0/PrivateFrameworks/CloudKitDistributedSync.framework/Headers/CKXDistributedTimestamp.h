// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXDISTRIBUTEDTIMESTAMP_H
#define CKXDISTRIBUTEDTIMESTAMP_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CKXDistributedTimestamp : NSObject

@property (nonatomic) NSInteger clock; // ivar: _clock
@property (nonatomic) unsigned char modifier; // ivar: _modifier
@property (retain, nonatomic) NSData *siteIdentifier; // ivar: _siteIdentifier
@property (nonatomic) BOOL unordered; // ivar: _unordered




@end


#endif