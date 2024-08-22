// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECABHELPER_H
#define _DECABHELPER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _DECABHelper : NSObject

@property (readonly, nonatomic) NSDictionary *abGroupContents; // ivar: _abGroupContents
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier


+(NSUInteger)cachedSaltedIndex:(NSUInteger)arg0 ;
+(NSUInteger)incrementalSaltedIndex:(NSUInteger)arg0 ;
+(NSUInteger)randomSaltedIndex:(NSUInteger)arg0 ;
+(NSUInteger)saltedIndex:(NSUInteger)arg0 ;
+(id)decDeviceId;
+(unsigned char)indexForDevice;
+(void)initialize;
+(void)setDefaultDeviceIndexPolicy;
+(void)setIndexForDevice:(id)arg0 ;
+(void)setStaticIndexForDevice:(unsigned char)arg0 ;
-(id)init;
-(id)initWithAssetContents:(id)arg0 ;
-(id)initWithAssetContents:(id)arg0 indexForDevice:(unsigned char)arg1 ;
-(id)initWithAssetContents:(id)arg0 specifiedABGroup:(id)arg1 indexForDevice:(unsigned char)arg2 ;
-(id)initWithAssetsForResource:(id)arg0 ofType:(id)arg1 ;
-(id)initWithAssetsForResource:(id)arg0 ofType:(id)arg1 specifiedABGroup:(id)arg2 ;


@end


#endif