// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRASSETCATALOGSET_H
#define TXRASSETCATALOGSET_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TXRAssetCatalogSet : NSObject

@property (readonly) NSArray *configs; // ivar: _configs
@property (readonly, nonatomic) BOOL cubemap; // ivar: _cubemap
@property (nonatomic) NSUInteger interpretation; // ivar: _interpretation
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger origin; // ivar: _origin


-(BOOL)addConfig:(id)arg0 error:(*id)arg1 ;
-(id)exportAtLocation:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif