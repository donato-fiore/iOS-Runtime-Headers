// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTIMEERRORSEQUENCE_H
#define TSTIMEERRORSEQUENCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSTimeErrorSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *timeErrors; // ivar: _timeErrors


+(id)timeErrorSequenceWithTimestamps:(*NSUInteger)arg0 timeError:(*NSInteger)arg1 count:(NSInteger)arg2 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 withFilename:(id)arg1 ;
-(id)generatePythonScriptWithOutputPath:(id)arg0 fileName:(id)arg1 titleName:(id)arg2 plotPath:(id)arg3 showPlot:(BOOL)arg4 ;
-(id)initWithTimeErrors:(id)arg0 ;


@end


#endif