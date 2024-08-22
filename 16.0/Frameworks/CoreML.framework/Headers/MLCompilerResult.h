// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCOMPILERRESULT_H
#define MLCOMPILERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MLCompilerResult : NSObject

@property (retain) NSArray *outputFiles; // ivar: _outputFiles


+(id)resultWithArchive:(*void)arg0 ;
+(id)resultWithOutputFiles:(id)arg0 ;


@end


#endif