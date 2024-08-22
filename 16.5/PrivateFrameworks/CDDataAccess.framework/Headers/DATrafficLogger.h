// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATRAFFICLOGGER_H
#define DATRAFFICLOGGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DATrafficLogger : NSObject

@property (retain, nonatomic) NSString *filename; // ivar: _filename


+(BOOL)enabled;
-(id)initWithFilename:(id)arg0 ;
-(void)_ensureCustomLogFile;
-(void)logSnippet:(id)arg0 ;
-(void)slurpAndRemoveLookasideFile:(id)arg0 prefixString:(id)arg1 suffixString:(id)arg2 ;


@end


#endif