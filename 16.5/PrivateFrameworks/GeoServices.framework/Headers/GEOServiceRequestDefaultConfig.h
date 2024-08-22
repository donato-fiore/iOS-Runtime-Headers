// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSERVICEREQUESTDEFAULTCONFIG_H
#define GEOSERVICEREQUESTDEFAULTCONFIG_H

@class NSString;
@protocol GEOServiceRequestConfiguring;

#import <Foundation/Foundation.h>


@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)urlType;
-(id)additionalHTTPHeaders;
-(id)additionalURLQueryItems;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(struct ? )dataRequestKindForRequest:(id)arg0 traits:(id)arg1 ;


@end


#endif