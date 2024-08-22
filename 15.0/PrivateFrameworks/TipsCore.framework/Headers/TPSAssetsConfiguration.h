// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSASSETSCONFIGURATION_H
#define TPSASSETSCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TPSAssets.h"

@interface TPSAssetsConfiguration : NSObject

@property (copy, nonatomic) TPSAssets *assets; // ivar: _assets
@property (nonatomic) NSInteger capability; // ivar: _capability
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSInteger opacity; // ivar: _opacity
@property (nonatomic) NSInteger userInterface; // ivar: _userInterface
@property (nonatomic) NSInteger viewMode; // ivar: _viewMode


-(id)cacheIdentifierForType:(NSInteger)arg0 ;
-(id)debugDescription;
-(id)identifierForType:(NSInteger)arg0 ;
-(id)initWithAssets:(id)arg0 language:(id)arg1 ;


@end


#endif