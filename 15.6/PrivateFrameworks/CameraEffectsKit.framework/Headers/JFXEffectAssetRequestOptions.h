// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXEFFECTASSETREQUESTOPTIONS_H
#define JFXEFFECTASSETREQUESTOPTIONS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface JFXEffectAssetRequestOptions : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *filterOptionsArray; // ivar: _filterOptionsArray
@property (nonatomic, getter=isNetworkAccessDisabled) BOOL networkAccessDisabled; // ivar: _networkAccessDisabled
@property (nonatomic) NSInteger priority; // ivar: _priority


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif