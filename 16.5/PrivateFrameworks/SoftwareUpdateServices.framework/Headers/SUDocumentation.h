// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUDOCUMENTATION_H
#define SUDOCUMENTATION_H

@class SUCoreDocumentation, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) SUCoreDocumentation *coreDocumentation; // ivar: _coreDocumentation
@property (retain, nonatomic) NSString *primaryLanguage; // ivar: _primaryLanguage


+(BOOL)supportsSecureCoding;
-(BOOL)hasAnyDocumentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)humanReadableUpdateName;
-(id)iconImage;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSUCoreDocumentation:(id)arg0 ;
-(id)licenseAgreement;
-(id)licenseAgreementFileName;
-(id)notificationBodyString;
-(id)notificationTitleString;
-(id)recommendedUpdateAlertBodyString;
-(id)recommendedUpdateTitleString;
-(id)releaseNotes;
-(id)releaseNotesFileName;
-(id)releaseNotesSummary;
-(id)releaseNotesSummaryFileName;
-(id)slaVersion;
-(void)_resetIfNecessary;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif