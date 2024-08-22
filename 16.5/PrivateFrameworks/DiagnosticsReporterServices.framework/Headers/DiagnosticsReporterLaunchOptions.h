// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICSREPORTERLAUNCHOPTIONS_H
#define DIAGNOSTICSREPORTERLAUNCHOPTIONS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface DiagnosticsReporterLaunchOptions : NSObject

@property (copy, nonatomic) NSArray *files_to_attach; // ivar: _files_to_attach
@property (copy, nonatomic) NSString *log_path; // ivar: _log_path
@property (copy, nonatomic) NSString *panic_string; // ivar: _panic_string




@end


#endif