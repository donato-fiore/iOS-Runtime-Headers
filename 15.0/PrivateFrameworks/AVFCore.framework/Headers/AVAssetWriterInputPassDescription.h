// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTPASSDESCRIPTION_H
#define AVASSETWRITERINPUTPASSDESCRIPTION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInputPassDescriptionInternal.h"

@interface AVAssetWriterInputPassDescription : NSObject {
    AVAssetWriterInputPassDescriptionInternal *_internal;
}


@property (readonly, nonatomic) NSArray *sourceTimeRanges;


-(id)description;
-(id)init;
-(id)initWithTimeRanges:(id)arg0 ;
-(void)dealloc;


@end


#endif