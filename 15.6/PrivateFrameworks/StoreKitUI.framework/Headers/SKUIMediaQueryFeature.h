// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMEDIAQUERYFEATURE_H
#define SKUIMEDIAQUERYFEATURE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SKUIMediaQueryFeature : NSObject

@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) NSArray *notificationNames;
@property (readonly, nonatomic) NSArray *requiredKeys;


+(BOOL)supportsFeatureName:(id)arg0 ;
-(BOOL)evaluateWithValues:(id)arg0 ;
-(id)initWithFeatureName:(id)arg0 value:(id)arg1 ;


@end


#endif