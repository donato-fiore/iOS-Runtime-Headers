// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKAPPLICATIONMANIFEST_H
#define _WKAPPLICATIONMANIFEST_H

@class NSString, NSArray, NSURL, UIColor;
@protocol WKObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _WKApplicationManifest : NSObject <WKObject, NSSecureCoding>

 {
    ObjectStorage<API::ApplicationManifest> _applicationManifest;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) NSString *applicationDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSURL *manifestId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *scope;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSURL *startURL;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) UIColor *themeColor;


+(BOOL)supportsSecureCoding;
+(id)applicationManifestFromJSON:(id)arg0 manifestURL:(id)arg1 documentURL:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif