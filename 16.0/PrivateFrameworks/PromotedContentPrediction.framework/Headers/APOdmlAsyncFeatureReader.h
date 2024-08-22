// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLASYNCFEATUREREADER_H
#define APODMLASYNCFEATUREREADER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface APOdmlAsyncFeatureReader : NSObject

@property (nonatomic) *__sFILE filePointer; // ivar: _filePointer
@property (nonatomic) int numVectors; // ivar: _numVectors
@property (retain, nonatomic) NSDictionary *offsetDictionary; // ivar: _offsetDictionary


-(id)initWithURL:(id)arg0 ;
-(id)parseHeader;
-(id)vectorForAdamID:(id)arg0 usingTwoDimensional:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif