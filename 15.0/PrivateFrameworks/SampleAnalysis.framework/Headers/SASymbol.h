// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASYMBOL_H
#define SASYMBOL_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SASymbol : NSObject {
    NSUInteger _offsetIntoSegment;
    NSUInteger _length;
    NSString *_name;
    NSMutableArray *_sourceInfos;
}


@property (readonly) NSUInteger length;
@property (readonly) NSString *name;
@property (readonly) NSUInteger offsetIntoSegment;
@property (readonly) NSUInteger offsetIntoTextSegment;


-(id)debugDescription;


@end


#endif