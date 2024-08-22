// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSENGAGEMENTAPPRESPONSEMODEL_H
#define AMSENGAGEMENTAPPRESPONSEMODEL_H

@class NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSEngagementAppResponseModel : NSObject

@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSDate *created; // ivar: _created
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) NSDictionary *responseData;


+(BOOL)_shouldEvictDefinition:(id)arg0 created:(id)arg1 ;
-(BOOL)matchesEvent:(id)arg0 ;
-(id)exportObject;
-(id)initWithCacheObject:(id)arg0 ;
-(id)initWithData:(id)arg0 cacheInfo:(id)arg1 ;


@end


#endif