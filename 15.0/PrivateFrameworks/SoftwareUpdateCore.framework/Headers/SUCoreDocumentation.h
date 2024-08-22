// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREDOCUMENTATION_H
#define SUCOREDOCUMENTATION_H

@class NSString, NSData, NSURL, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreDocumentation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSData *licenseAgreement; // ivar: _licenseAgreement
@property (retain, nonatomic) NSString *licenseAgreementFileName; // ivar: _licenseAgreementFileName
@property (retain, nonatomic) NSURL *localBundleURL; // ivar: _localBundleURL
@property (retain, nonatomic) NSString *preferencesIconFileName; // ivar: _preferencesIconFileName
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSData *releaseNotes; // ivar: _releaseNotes
@property (retain, nonatomic) NSString *releaseNotesFileName; // ivar: _releaseNotesFileName
@property (retain, nonatomic) NSData *releaseNotesSummary; // ivar: _releaseNotesSummary
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName; // ivar: _releaseNotesSummaryFileName
@property (retain, nonatomic) NSString *serverAssetAlgorithm; // ivar: _serverAssetAlgorithm
@property (nonatomic) NSInteger serverAssetChunkSize; // ivar: _serverAssetChunkSize
@property (retain, nonatomic) NSData *serverAssetMeasurement; // ivar: _serverAssetMeasurement
@property (retain, nonatomic) NSURL *serverAssetURL; // ivar: _serverAssetURL
@property (retain, nonatomic) NSNumber *slaVersion; // ivar: _slaVersion


+(BOOL)supportsSecureCoding;
-(id)_extendDocumentationProperties;
-(id)_extendDocumentationPropertiesWithSimulateEvent:(id)arg0 ;
-(id)_resourceFromBundle:(struct __CFBundle *)arg0 forKey:(id)arg1 ;
-(id)description;
-(id)extendDocumentationProperties;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentationAsset:(id)arg0 ;
-(id)softwareUpdateIconImage;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif