// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIFEATUREFLAG_H
#define VUIFEATUREFLAG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIFeatureFlag : NSObject

@property (readonly, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (readonly, nonatomic) NSString *defaultsKey; // ivar: _defaultsKey
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *featureDescription; // ivar: _featureDescription
@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) BOOL isAvailableForOS; // ivar: _isAvailableForOS
@property (readonly, nonatomic) BOOL isEnabledByDefault; // ivar: _isEnabledByDefault
@property (retain, nonatomic) NSString *isEnabledByDefaultKey; // ivar: _isEnabledByDefaultKey


-(id)initWithFeatureDict:(id)arg0 ;


@end


#endif