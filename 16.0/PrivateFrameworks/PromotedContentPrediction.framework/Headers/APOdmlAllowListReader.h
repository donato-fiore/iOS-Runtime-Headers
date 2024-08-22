// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLALLOWLISTREADER_H
#define APODMLALLOWLISTREADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APOdmlAllowListReader : NSObject

@property (nonatomic) *__sFILE file; // ivar: _file
@property (nonatomic) unsigned int nextIndex; // ivar: _nextIndex
@property (nonatomic) NSUInteger numberOfIDs; // ivar: _numberOfIDs
@property (copy, nonatomic) NSString *vectorVersion; // ivar: _vectorVersion


-(id)nextLine;
-(id)openForReadingContentsOfURL:(id)arg0 ;
-(id)readFile;
-(void)dealloc;


@end


#endif