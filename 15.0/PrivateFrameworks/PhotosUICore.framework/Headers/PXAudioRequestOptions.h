// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAUDIOREQUESTOPTIONS_H
#define PXAUDIOREQUESTOPTIONS_H

@protocol NSCopying, PXAudioAssetEntryPoint;

#import <Foundation/Foundation.h>


@interface PXAudioRequestOptions : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<PXAudioAssetEntryPoint> *entryPoint; // ivar: _entryPoint
@property (nonatomic) NSInteger intent; // ivar: _intent
@property (nonatomic) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (nonatomic) ? preferredDuration; // ivar: _preferredDuration


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif