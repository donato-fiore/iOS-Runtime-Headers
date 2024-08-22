// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSDEFAULTSOUNDPACK_H
#define VOSDEFAULTSOUNDPACK_H

@class NSString, NSDictionary;
@protocol VOSSoundPack;

#import <Foundation/Foundation.h>


@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventToSoundFilenameMapping;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)soundAssetURLForOutputEvent:(id)arg0 ;


@end


#endif