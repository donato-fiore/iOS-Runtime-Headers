// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKRESOURCEREQUEST_H
#define GKRESOURCEREQUEST_H

@protocol NSObject, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface GKResourceRequest : NSObject

@property (copy, nonatomic) NSObject<NSObject> *cacheKey; // ivar: _cacheKey
@property (readonly, nonatomic) NSUInteger cacheOptions;
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *requestKey; // ivar: _requestKey


+(id)makeUniqueKey;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)makeLoadOperation;
-(void)didLoadResource:(id)arg0 error:(id)arg1 ;


@end


#endif