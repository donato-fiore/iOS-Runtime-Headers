// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASOURCEINFO_H
#define SASOURCEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SASourceInfo : NSObject {
    NSUInteger _offsetIntoSegment;
}


@property (readonly) unsigned int columnNum; // ivar: _columnNum
@property (readonly) NSString *fileName;
@property (readonly) NSString *filePath; // ivar: _filePath
@property (readonly) NSUInteger length; // ivar: _length
@property (readonly) unsigned int lineNum; // ivar: _lineNum
@property (readonly) NSUInteger offsetIntoSegment;
@property (readonly) NSUInteger offsetIntoTextSegment;


-(id)debugDescription;


@end


#endif