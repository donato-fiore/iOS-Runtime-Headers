// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDEVICEQUERYPARAMETERS_H
#define SFDEVICEQUERYPARAMETERS_H

@class MAAssetQuery, NSString;

#import <Foundation/Foundation.h>


@interface SFDeviceQueryParameters : NSObject

@property (readonly, nonatomic) BOOL fallback; // ivar: _fallback
@property (readonly, nonatomic) BOOL imperfectMatch; // ivar: _imperfectMatch
@property (readonly, nonatomic) BOOL installedOnly; // ivar: _installedOnly
@property (readonly, nonatomic) MAAssetQuery *maQuery; // ivar: _maQuery
@property (readonly, nonatomic) NSString *queryType;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDeviceAssetQuery:(id)arg0 installedOnly:(BOOL)arg1 imperfectMatch:(BOOL)arg2 fallback:(BOOL)arg3 ;
-(id)maAssetQueryDescription;


@end


#endif