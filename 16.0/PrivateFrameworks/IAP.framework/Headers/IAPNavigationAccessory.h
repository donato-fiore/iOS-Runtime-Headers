// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAPNAVIGATIONACCESSORY_H
#define IAPNAVIGATIONACCESSORY_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate; // ivar: __wasFoundInLastUpdate
@property (retain) NSSet *components; // ivar: _components
@property NSUInteger identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requestedSourceNameForAnyComponent;
-(BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDict:(id)arg0 ;


@end


#endif