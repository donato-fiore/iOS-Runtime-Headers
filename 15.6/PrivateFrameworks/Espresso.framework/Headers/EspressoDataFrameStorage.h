// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSODATAFRAMESTORAGE_H
#define ESPRESSODATAFRAMESTORAGE_H

@class NSString, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EspressoDataFrameStorage : NSObject

@property (retain) NSString *baseFilename; // ivar: _baseFilename
@property (retain) NSMutableArray *dataFrames; // ivar: _dataFrames
@property (retain) NSMutableDictionary *mappedFiles; // ivar: _mappedFiles


+(id)dataFrameStorageFromPath:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)numberOfDataFrames;
-(id)dataFrameAtIndex:(NSUInteger)arg0 ;


@end


#endif