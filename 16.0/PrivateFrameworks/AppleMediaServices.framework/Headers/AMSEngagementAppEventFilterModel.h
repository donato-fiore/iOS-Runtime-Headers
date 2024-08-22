// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSENGAGEMENTAPPEVENTFILTERMODEL_H
#define AMSENGAGEMENTAPPEVENTFILTERMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly, nonatomic) NSUInteger components;
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition


+(BOOL)matchEvent:(id)arg0 toFilter:(id)arg1 ;
-(BOOL)matchesEvent:(id)arg0 ;
-(id)exportObject;
-(id)init;
-(id)initWithCacheObject:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif