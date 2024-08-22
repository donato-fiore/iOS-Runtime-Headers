// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPARASSETPROPERTIES_H
#define LPARASSETPROPERTIES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LPARAssetProperties : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif