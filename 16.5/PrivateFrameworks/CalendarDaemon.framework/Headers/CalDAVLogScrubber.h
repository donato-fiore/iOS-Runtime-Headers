// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVLOGSCRUBBER_H
#define CALDAVLOGSCRUBBER_H

@class NSMutableArray, NSURL;
@protocol CADDiagnosticLogContext;

#import <Foundation/Foundation.h>


@interface CalDAVLogScrubber : NSObject {
    NSMutableArray *_urlsToCleanUp;
}


@property (retain, nonatomic) NSObject<CADDiagnosticLogContext> *context; // ivar: _context
@property (retain, nonatomic) NSURL *inputURL; // ivar: _inputURL
@property (retain, nonatomic) NSURL *outputURL; // ivar: _outputURL


+(BOOL)redactLog:(id)arg0 toOutputFile:(id)arg1 context:(id)arg2 ;
+(BOOL)sortICSDocuments;
+(id)log;
+(void)setSortICSDocuments:(BOOL)arg0 ;
-(BOOL)scrub;
-(id)decompressedInputFile;
-(id)init;
-(id)temporaryUncompressedFile;
-(void)cleanUp;
-(void)compressFileAt:(id)arg0 to:(id)arg1 ;


@end


#endif