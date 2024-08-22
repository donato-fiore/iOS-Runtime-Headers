// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSOFTWAREUPDATEDOCUMENTATION_H
#define HMSOFTWAREUPDATEDOCUMENTATION_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMHTMLDocument.h"
#import "HMPlainTextDocument.h"

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>



@property (readonly, copy) HMHTMLDocument *licenseAgreement; // ivar: _licenseAgreement
@property (readonly, copy) NSNumber *licenseAgreementVersion; // ivar: _licenseAgreementVersion
@property (readonly, copy) HMHTMLDocument *releaseNotes; // ivar: _releaseNotes
@property (readonly, copy) HMHTMLDocument *releaseNotesSummary; // ivar: _releaseNotesSummary
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes; // ivar: _textReleaseNotes


+(BOOL)supportsSecureCoding;
+(id)localizationsForBundle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReleaseNotesSummary:(id)arg0 releaseNotes:(id)arg1 textReleaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif