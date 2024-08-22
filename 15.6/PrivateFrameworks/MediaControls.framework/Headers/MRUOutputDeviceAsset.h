// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUOUTPUTDEVICEASSET_H
#define MRUOUTPUTDEVICEASSET_H

@class UIImage, NSString, CCUICAPackageDescription;

#import <Foundation/Foundation.h>


@interface MRUOutputDeviceAsset : NSObject

@property (nonatomic) NSUInteger deviceCount; // ivar: _deviceCount
@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSString *localizedDisplayTitle; // ivar: _localizedDisplayTitle
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription; // ivar: _packageDescription
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithIcon:(id)arg0 type:(NSInteger)arg1 deviceCount:(NSUInteger)arg2 ;
-(id)initWithOutputDeviceRoute:(id)arg0 ;
-(id)initWithPackageName:(id)arg0 type:(NSInteger)arg1 deviceCount:(NSUInteger)arg2 ;
-(id)initWithType:(NSInteger)arg0 deviceCount:(NSUInteger)arg1 ;


@end


#endif