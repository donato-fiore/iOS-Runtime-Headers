// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTEMPORARYCOLLECTIONNODE_H
#define TSTTEMPORARYCOLLECTIONNODE_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSTTemporaryCollectionNode : NSObject

@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (nonatomic) TSCEGridDimensions dimensions; // ivar: _dimensions
@property (nonatomic) NSUInteger firstIndex; // ivar: _firstIndex
@property (nonatomic) NSUInteger lastIndex; // ivar: _lastIndex
@property (retain, nonatomic) NSMutableArray *whitespaceAfterDelimiters; // ivar: _whitespaceAfterDelimiters
@property (retain, nonatomic) NSString *whitespaceBeforeFirstChild; // ivar: _whitespaceBeforeFirstChild


-(id)init;


@end


#endif