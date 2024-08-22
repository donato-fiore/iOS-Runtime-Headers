// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDBACKUPFMIPRESULTSPARSER_H
#define CDPDBACKUPFMIPRESULTSPARSER_H

@class NSString;
@protocol CDPDBackupRecoveryResultsParser;

#import <Foundation/Foundation.h>


@interface CDPDBackupFMIPResultsParser : NSObject <CDPDBackupRecoveryResultsParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)resultsDictionaryFromRecoveryResult:(id)arg0 error:(*id)arg1 ;


@end


#endif