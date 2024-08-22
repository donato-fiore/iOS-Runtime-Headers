// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETFRAGMENT_H
#define AVASSETFRAGMENT_H


#import <Foundation/Foundation.h>

#import "AVAssetFragmentInternal.h"

@interface AVAssetFragment : NSObject {
    AVAssetFragmentInternal *_internal;
}


@property (readonly) NSInteger sequenceNumber;


+(id)fragmentWithSequenceNumber:(NSInteger)arg0 ;
-(id)init;
-(id)initWithSequenceNumber:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif