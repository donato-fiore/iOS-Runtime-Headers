// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRESOURCEDIRECTORYSCRUBBER_H
#define NTKRESOURCEDIRECTORYSCRUBBER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NTKResourceDirectoryScrubber : NSObject {
    NSDictionary *_operationsMaps;
}




-(BOOL)_scrubAssetAtURL:(id)arg0 toDestinationURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)scrubDirectoryAtPath:(id)arg0 toDestinationPath:(id)arg1 error:(*id)arg2 ;
-(id)initWithOperations:(id)arg0 ;


@end


#endif