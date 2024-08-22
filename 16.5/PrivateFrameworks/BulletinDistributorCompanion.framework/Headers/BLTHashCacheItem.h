// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTHASHCACHEITEM_H
#define BLTHASHCACHEITEM_H

@class NSData, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface BLTHashCacheItem : NSObject {
    NSData *_MD5;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)hashCacheItemWithData:(id)arg0 URL:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)MD5;
-(id)initWithURL:(id)arg0 data:(id)arg1 identifier:(id)arg2 ;


@end


#endif