// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDEBUGRADARREPORTER_H
#define NTKDEBUGRADARREPORTER_H

@class NSMutableArray, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NTKDebugRadarReporter : NSObject

@property (retain, nonatomic) NSMutableArray *additionalInformationStrings; // ivar: _additionalInformationStrings
@property (copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (copy, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (retain, nonatomic) NSMutableArray *attachmentURLs; // ivar: _attachmentURLs
@property (copy, nonatomic) NSString *radarTitle; // ivar: _radarTitle
@property (retain, nonatomic) NSURL *temporaryDirectoryURLToCleanup; // ivar: _temporaryDirectoryURLToCleanup


+(BOOL)_archiveDirectory:(id)arg0 toFile:(id)arg1 ;
-(BOOL)addAttachmentAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)present;
-(id)initWithRadarTitle:(id)arg0 alertTitle:(id)arg1 alertMessage:(id)arg2 ;
-(void)appendInformationToDescription:(id)arg0 ;


@end


#endif