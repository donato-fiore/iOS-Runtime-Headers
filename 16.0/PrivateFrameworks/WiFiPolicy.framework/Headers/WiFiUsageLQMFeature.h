// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMFEATURE_H
#define WIFIUSAGELQMFEATURE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface WiFiUsageLQMFeature : NSObject

@property (retain, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (nonatomic) BOOL isPerSecond; // ivar: _isPerSecond
@property (retain, nonatomic) NSNumber *median; // ivar: _median


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithField:(id)arg0 andPerSecond:(BOOL)arg1 ;


@end


#endif