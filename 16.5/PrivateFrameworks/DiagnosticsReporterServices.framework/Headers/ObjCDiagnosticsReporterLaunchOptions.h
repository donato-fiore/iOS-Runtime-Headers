// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBJCDIAGNOSTICSREPORTERLAUNCHOPTIONS_H
#define OBJCDIAGNOSTICSREPORTERLAUNCHOPTIONS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface ObjCDiagnosticsReporterLaunchOptions : NSObject {
    ? files_to_attach;
    ? log_path;
    ? panic_string;
}


@property (nonatomic, copy) NSArray *files_to_attach;
@property (nonatomic, copy) NSString *log_path;
@property (nonatomic, copy) NSString *panic_string;


-(id)init;


@end


#endif