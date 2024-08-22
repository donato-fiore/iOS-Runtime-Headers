// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKJOB_H
#define PKJOB_H

@class NSString, NSURL, NSData, NSDate;

#import <Foundation/Foundation.h>

#import "PKPrintSettings.h"

@interface PKJob : NSObject

@property (retain, nonatomic) NSString *PIN; // ivar: _PIN
@property (readonly, nonatomic) NSString *localizedJobOptions;
@property (readonly, nonatomic) NSString *localizedStatusString;
@property (nonatomic) NSInteger mediaProgress; // ivar: mediaProgress
@property (nonatomic) NSInteger mediaSheets; // ivar: mediaSheets
@property (nonatomic) NSInteger mediaSheetsCompleted; // ivar: mediaSheetsCompleted
@property (nonatomic) NSInteger number; // ivar: number
@property (retain, nonatomic) NSString *printerDisplayName; // ivar: printerDisplayName
@property (nonatomic) NSInteger printerKind; // ivar: printerKind
@property (retain, nonatomic) NSString *printerLocation; // ivar: printerLocation
@property (retain, nonatomic) NSURL *printerURI; // ivar: _printerURI
@property (nonatomic) NSInteger remoteJobId; // ivar: remoteJobId
@property (retain, nonatomic) PKPrintSettings *settings; // ivar: settings
@property (nonatomic) NSInteger state; // ivar: state
@property (retain, nonatomic) NSData *thumbnailImage; // ivar: thumbnailImage
@property (retain, nonatomic) NSDate *timeAtCompleted; // ivar: timeAtCompleted
@property (retain, nonatomic) NSDate *timeAtCreation; // ivar: timeAtCreation
@property (retain, nonatomic) NSDate *timeAtProcessing; // ivar: timeAtProcessing


+(id)currentJob;
+(id)jobs;
-(NSInteger)cancel;
-(NSInteger)update;


@end


#endif