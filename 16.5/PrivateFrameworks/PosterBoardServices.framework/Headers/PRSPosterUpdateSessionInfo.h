// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATESESSIONINFO_H
#define PRSPOSTERUPDATESESSIONINFO_H

@class NSString, WFWallpaperConfiguration, NSDictionary;
@protocol BSXPCSecureCoding, NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PRSPosterUpdateSessionInfo : NSObject <BSXPCSecureCoding, NSSecureCoding>

 {
    NSObject<OS_xpc_object> *_shortcutsWallpaperConfigurationSandboxToken;
    NSInteger _shortcutsWallpaperConfigurationSandboxHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) WFWallpaperConfiguration *shortcutsWallpaperConfiguration; // ivar: _shortcutsWallpaperConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif