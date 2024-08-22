// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAPP_H
#define WFAPP_H

@class NSString;
@protocol NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>


@interface WFApp : NSObject <NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)allApps;
+(id)findAppWithBundleIdentifier:(id)arg0 name:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrontmost;
-(BOOL)isHidden;
-(BOOL)isRunning;
-(NSUInteger)hash;
-(id)bundleURL;
-(id)icon;
-(id)initWithBundleIdentifier:(id)arg0 localizedName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)launchDate;
-(id)processIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif