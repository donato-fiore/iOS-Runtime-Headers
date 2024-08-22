// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRDEFAULTS_H
#define SRDEFAULTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SRDefaults : NSObject {
    NSUInteger _datastoreVersion;
    NSUInteger _segmentSize;
    NSUInteger _metadataSize;
    NSUInteger _maxAllowedMappedPages;
    float _segmentResizeFactor;
    float _segmentPaddingFactor;
    NSString *_className;
    NSString *_exportingClassName;
}




-(void)dealloc;


@end


#endif