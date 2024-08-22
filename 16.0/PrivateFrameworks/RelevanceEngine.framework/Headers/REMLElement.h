// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLELEMENT_H
#define REMLELEMENT_H

@class NSString;
@protocol REAutomaticExportedInterface, NSCopying;

#import <Foundation/Foundation.h>

#import "REFeatureMap.h"

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>



@property (readonly, nonatomic) REFeatureMap *featureMap; // ivar: _featureMap
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 featureMap:(id)arg1 ;


@end


#endif