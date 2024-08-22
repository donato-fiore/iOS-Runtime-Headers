// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERDESCRIPTOR_H
#define _UIDOCUMENTPICKERDESCRIPTOR_H

@class NSExtension, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _UIDocumentPickerDescriptor : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, retain, nonatomic) NSString *fileProviderDocumentGroup;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic, getter=isNewlyAdded) BOOL newlyAdded; // ivar: _newlyAdded
@property (readonly, copy, nonatomic) NSString *nonUIIdentifier;
@property (readonly, copy, nonatomic) NSArray *supportedContentTypes;


+(BOOL)isContentManaged;
+(BOOL)isInAddToiCloudDrive;
+(char)cloudEnabledStatus;
+(char)cloudMigrationStatus;
+(id)allPickers;
+(id)allPickersForMode:(NSUInteger)arg0 documentTypes:(id)arg1 ;
+(id)defaultPickerIdentifierForMode:(NSUInteger)arg0 documentTypes:(id)arg1 ;
+(id)descriptorWithIdentifier:(id)arg0 ;
+(id)enabledPickersForMode:(NSUInteger)arg0 documentTypes:(id)arg1 ;
+(id)filteredPickersForPickers:(id)arg0 filter:(NSUInteger)arg1 ;
+(id)hostBundleID;
+(id)manageablePickersForMode:(NSUInteger)arg0 documentTypes:(id)arg1 ;
+(id)pickerOrder;
+(struct ? )hostAuditToken;
+(void)__updateCloudEnabledStatus;
+(void)_ubiquityIdentityTokenDidChange:(id)arg0 ;
+(void)_updateCloudEnabledStatus;
+(void)setHostAuditToken:(struct ? )arg0 ;
+(void)setHostBundleID:(id)arg0 ;
+(void)setIsContentManaged:(BOOL)arg0 ;
+(void)setOrderFromPickers:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)pickerEnabledForMode:(NSUInteger)arg0 documentTypes:(id)arg1 reason:(*id)arg2 ;
-(BOOL)supportsPickerMode:(NSUInteger)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_extensionValueOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)_ownBundle;
-(id)_parentApp;
-(id)description;
-(id)imageWithScale:(CGFloat)arg0 ;
-(id)nonUIBundle;


@end


#endif