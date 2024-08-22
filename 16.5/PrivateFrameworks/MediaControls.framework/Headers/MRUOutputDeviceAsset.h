// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUOUTPUTDEVICEASSET_H
#define MRUOUTPUTDEVICEASSET_H

@class UIImage, NSString, CCUICAPackageDescription;


#import "MRUAsset.h"

@interface MRUOutputDeviceAsset : MRUAsset

@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSInteger kind;
@property (readonly, nonatomic) NSString *localizedDisplayTitle; // ivar: _localizedDisplayTitle
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)inCallAsset;
+(id)sharingAsset;
+(id)speakerAsset;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithOutputDeviceRoute:(id)arg0 ;
-(id)initWithPackageAsset:(id)arg0 symbolName:(id)arg1 image:(id)arg2 type:(NSInteger)arg3 deviceCount:(NSUInteger)arg4 ;


@end


#endif