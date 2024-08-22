// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKINSTALLEDAPP_H
#define FBKINSTALLEDAPP_H

@class NSNumber, LSApplicationProxy, NSString;

#import <Foundation/Foundation.h>


@interface FBKInstalledApp : NSObject

@property (readonly) NSNumber *adamID;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy; // ivar: _applicationProxy
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *version; // ivar: _version


+(id)_searchIdentifierInAppURL:(id)arg0 ;
+(id)_searchVersionInAppURL:(id)arg0 identifier:(id)arg1 ;
+(id)appWithAppProxy:(id)arg0 ;
-(BOOL)isAppleApp;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)isIWorkApp;
-(id)description;


@end


#endif