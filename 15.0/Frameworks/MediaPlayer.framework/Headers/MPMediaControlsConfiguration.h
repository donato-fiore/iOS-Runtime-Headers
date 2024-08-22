// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIACONTROLSCONFIGURATION_H
#define MPMEDIACONTROLSCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowsNowPlayingApplicationLaunch; // ivar: _allowsNowPlayingApplicationLaunch
@property (nonatomic) NSInteger initatorStyle; // ivar: _initatorStyle
@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth
@property (copy, nonatomic) NSString *presentingAppBundleID; // ivar: _presentingAppBundleID
@property (copy, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (copy, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID
@property (nonatomic) BOOL shouldPreventAutorotation; // ivar: _shouldPreventAutorotation
@property (nonatomic) BOOL sortByIsVideoRoute; // ivar: _sortByIsVideoRoute
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif