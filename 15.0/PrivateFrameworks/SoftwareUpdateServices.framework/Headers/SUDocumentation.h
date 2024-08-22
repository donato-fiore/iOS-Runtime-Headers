// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUDOCUMENTATION_H
#define SUDOCUMENTATION_H

@class NSMutableDictionary, NSURL, NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_cachedData;
}


@property (retain, nonatomic) NSURL *baseDocumentationURL; // ivar: _baseDocumentationURL
@property (retain, nonatomic) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (retain, nonatomic) NSString *iconImageName; // ivar: _iconImageName
@property (retain, nonatomic) NSString *licenseAgreementFileName; // ivar: _licenseAgreementFileName
@property (retain, nonatomic) NSURL *licenseAgreementURL; // ivar: _licenseAgreementURL
@property (retain, nonatomic) NSString *primaryLanguage; // ivar: _primaryLanguage
@property (retain, nonatomic) NSString *releaseNotesFileName; // ivar: _releaseNotesFileName
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName; // ivar: _releaseNotesSummaryFileName
@property (retain, nonatomic) NSURL *releaseNotesSummaryURL; // ivar: _releaseNotesSummaryURL
@property (retain, nonatomic) NSURL *releaseNotesURL; // ivar: _releaseNotesURL
@property (retain, nonatomic) NSNumber *slaVersion; // ivar: _slaVersion


+(BOOL)supportsSecureCoding;
-(BOOL)hasAnyDocumentation;
-(id)_cachedDocumentationDataForURL:(id)arg0 ;
-(id)_getSUImage:(id)arg0 ;
-(id)_localizedResourceURLForDocumentationAsset:(id)arg0 resource:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getFullWidthImage;
-(id)getIconImage;
-(id)iconImage;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentationURL:(id)arg0 ;
-(id)licenseAgreement;
-(id)localizedDocumentationStringFromBundle:(struct __CFBundle *)arg0 key:(id)arg1 ;
-(id)localizedStringFromBundle:(struct __CFBundle *)arg0 key:(id)arg1 ;
-(id)localizedURLFromBundle:(struct __CFBundle *)arg0 resource:(id)arg1 ;
-(id)pngImageDataFromBundle:(struct __CFBundle *)arg0 fileName:(id)arg1 ;
-(id)releaseNotes;
-(id)releaseNotesSummary;
-(void)_clearTransientDocumentationData;
-(void)_resetIfNecessary;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif