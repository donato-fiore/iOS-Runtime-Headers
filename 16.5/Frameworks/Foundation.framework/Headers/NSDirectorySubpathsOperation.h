// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSDIRECTORYSUBPATHSOPERATION_H
#define NSDIRECTORYSUBPATHSOPERATION_H

@class NSMutableArray;


#import "NSDirectoryTraversalOperation.h"

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {
    NSMutableArray *_subpaths;
}




+(id)_errorWithErrno:(int)arg0 atPath:(id)arg1 ;
+(id)directorySubpathsOperationAtPath:(id)arg0 ;
-(id)subpaths;
-(void)dealloc;
-(void)handlePathname:(id)arg0 ;


@end


#endif