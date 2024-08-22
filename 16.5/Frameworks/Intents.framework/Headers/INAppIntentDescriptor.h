// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INAPPINTENTDESCRIPTOR_H
#define INAPPINTENTDESCRIPTOR_H

@class NSString, NSSet;
@protocol NSSecureCoding;


#import "INAppDescriptor.h"

@interface INAppIntentDescriptor : INAppDescriptor <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *intentIdentifier; // ivar: _intentIdentifier
@property (readonly, nonatomic) NSSet *supportedEntities; // ivar: _supportedEntities


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntentIdentifier:(id)arg0 applicationRecord:(id)arg1 ;
-(id)initWithIntentIdentifier:(id)arg0 applicationRecord:(id)arg1 supportedAppIntents:(id)arg2 supportedEntities:(id)arg3 ;
-(id)initWithIntentIdentifier:(id)arg0 localizedName:(id)arg1 bundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 counterpartIdentifiers:(id)arg4 teamIdentifier:(id)arg5 supportedIntents:(id)arg6 supportedEntities:(id)arg7 bundleURL:(id)arg8 documentTypes:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif