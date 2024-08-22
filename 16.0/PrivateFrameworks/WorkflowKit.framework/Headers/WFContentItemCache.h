// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEMCACHE_H
#define WFCONTENTITEMCACHE_H

@class NSMapTable;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFContentItemCache : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMapTable *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


+(BOOL)supportsSecureCoding;
-(id)contentItemForUUID:(id)arg0 ;
-(id)init;
-(id)initWithCache:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addContentCollection:(id)arg0 ;
-(void)clear;
-(void)deleteContentCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif