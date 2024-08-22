// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FFDEFAULTFILEREADER_H
#define FFDEFAULTFILEREADER_H

@protocol FFFileReader;

#import <Foundation/Foundation.h>


@interface FFDefaultFileReader : NSObject <FFFileReader>





-(id)dictionaryWithContentsOfURL:(id)arg0 error:(*id)arg1 ;


@end


#endif