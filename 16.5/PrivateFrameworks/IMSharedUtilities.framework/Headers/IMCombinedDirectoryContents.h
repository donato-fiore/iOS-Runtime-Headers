// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCOMBINEDDIRECTORYCONTENTS_H
#define IMCOMBINEDDIRECTORYCONTENTS_H

@class NSArray;


#import "IMDirectoryContents.h"

@interface IMCombinedDirectoryContents : IMDirectoryContents

@property (readonly, nonatomic) NSArray *directoryContents; // ivar: _directoryContents


-(id)combineArrays:(id)arg0 rhs:(id)arg1 ;
-(id)initWithCombinedDirectoryContents:(id)arg0 ;
-(void)gather;


@end


#endif