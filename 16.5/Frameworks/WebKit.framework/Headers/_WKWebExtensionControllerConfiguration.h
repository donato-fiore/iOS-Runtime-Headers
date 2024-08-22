// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSIONCONTROLLERCONFIGURATION_H
#define _WKWEBEXTENSIONCONTROLLERCONFIGURATION_H

@class NSString, NSUUID;
@protocol WKObject, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _WKWebExtensionControllerConfiguration : NSObject <WKObject, NSSecureCoding, NSCopying>

 {
    ObjectStorage<WebKit::WebExtensionControllerConfiguration> _webExtensionControllerConfiguration;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) *void _webExtensionControllerConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)configurationWithIdentifier:(id)arg0 ;
+(id)defaultConfiguration;
+(id)nonPersistentConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif