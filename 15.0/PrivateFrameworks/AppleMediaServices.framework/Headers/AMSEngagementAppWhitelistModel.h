// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTAPPWHITELISTMODEL_H
#define AMSENGAGEMENTAPPWHITELISTMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSEngagementAppWhitelistModel : NSObject

@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition


+(BOOL)matchEvent:(id)arg0 toFilter:(id)arg1 ;
-(BOOL)matchesEvent:(id)arg0 ;
-(id)exportObject;
-(id)initWithCacheObject:(id)arg0 ;
-(id)initWithFilter:(id)arg0 allowsResponse:(BOOL)arg1 ;


@end


#endif