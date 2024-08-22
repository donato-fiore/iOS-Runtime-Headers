// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLAPPVECTORSFILE_H
#define APODMLAPPVECTORSFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APOdmlAppVectorsFile : NSObject

@property (nonatomic) *__sFILE file; // ivar: _file
@property (nonatomic) unsigned int nextIndex; // ivar: _nextIndex
@property (nonatomic) NSUInteger numberOfVectors; // ivar: _numberOfVectors
@property (copy, nonatomic) NSString *vectorVersion; // ivar: _vectorVersion


-(id)initForReadingContentsOfURL:(id)arg0 version:(id)arg1 ;
-(id)nextVector;
-(void)dealloc;


@end


#endif