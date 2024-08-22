// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUBDOCUMENTATION_H
#define SUBDOCUMENTATION_H

@class NSString, NSURL, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUBDocumentation : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSString *currentPhoneLanguage;
@property (retain, nonatomic) NSURL *documentationBundleURL; // ivar: _documentationBundleURL
@property (retain, nonatomic) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (retain, nonatomic) NSData *licenseAgreement; // ivar: _licenseAgreement
@property (retain, nonatomic) NSString *phoneLanguage; // ivar: _phoneLanguage
@property (readonly, retain, nonatomic) NSArray *preferredPhoneLanguages;
@property (retain, nonatomic) NSData *releaseNotes; // ivar: _releaseNotes
@property (retain, nonatomic) NSData *releaseNotesSummary; // ivar: _releaseNotesSummary


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_resourceFromBundle:(id)arg0 forKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentationBundleURL:(id)arg0 ;
-(void)_loadBundleResources;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif