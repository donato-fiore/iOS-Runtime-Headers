// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBLAUNCHINTERFACECONFIGURATION_H
#define XBLAUNCHINTERFACECONFIGURATION_H

@class NSArray, NSString;
@protocol BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface XBLaunchInterfaceConfiguration : NSObject <BSXPCCoding, NSSecureCoding>



@property (readonly, nonatomic) NSArray *bars; // ivar: _bars
@property (readonly, copy, nonatomic) NSString *colorName; // ivar: _colorName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) BOOL imageRespectsSafeAreaInsets; // ivar: _imageRespectsSafeAreaInsets
@property (readonly, copy, nonatomic) NSString *navigationBarImageName; // ivar: _navigationBarImageName
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tabBarImageName; // ivar: _tabBarImageName
@property (readonly, copy, nonatomic) NSString *toolbarImageName; // ivar: _toolbarImageName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationDictionary:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif