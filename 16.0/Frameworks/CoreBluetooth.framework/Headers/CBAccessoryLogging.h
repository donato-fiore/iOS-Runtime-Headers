// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBACCESSORYLOGGING_H
#define CBACCESSORYLOGGING_H


#import <Foundation/Foundation.h>


@interface CBAccessoryLogging : NSObject



+(NSUInteger)getComponentIDFromProductID:(NSUInteger)arg0 ;
+(NSUInteger)getComponentIDFromRadarReason:(int)arg0 ;
+(id)getComponentNameFromProductID:(NSUInteger)arg0 ;
+(id)getComponentNameFromRadarReason:(int)arg0 ;
+(id)getComponentVersionFromProductID:(NSUInteger)arg0 ;
+(id)getComponentVersionFromRadarReason:(int)arg0 ;
+(id)getProductNameFromProductID:(NSUInteger)arg0 ;


@end


#endif