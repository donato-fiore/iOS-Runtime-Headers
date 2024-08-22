// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTPRESETRESOURCES_H
#define AVTPRESETRESOURCES_H

@class NSString, AVTPreset;
@protocol AVTCacheableResource;

#import <Foundation/Foundation.h>


@interface AVTPresetResources : NSObject <AVTCacheableResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVTPreset *preset; // ivar: _preset
@property (readonly, copy, nonatomic) NSString *presetIdentifier;
@property (readonly, nonatomic) id *resources;
@property (readonly) Class superclass;


-(BOOL)requiresEncryption;
-(NSUInteger)costForScope:(id)arg0 ;
-(id)initWithPreset:(id)arg0 ;
-(id)volatileIdentifierForScope:(id)arg0 ;


@end


#endif