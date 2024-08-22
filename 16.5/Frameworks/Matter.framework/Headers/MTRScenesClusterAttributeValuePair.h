// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSCENESCLUSTERATTRIBUTEVALUEPAIR_H
#define MTRSCENESCLUSTERATTRIBUTEVALUEPAIR_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterAttributeValuePair : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *attributeID; // ivar: _attributeID
@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSArray *attributeValue; // ivar: _attributeValue


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif