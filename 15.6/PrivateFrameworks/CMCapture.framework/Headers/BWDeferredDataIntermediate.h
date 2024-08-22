// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEFERREDDATAINTERMEDIATE_H
#define BWDEFERREDDATAINTERMEDIATE_H

@class NSData;


#import "BWDeferredIntermediate.h"

@interface BWDeferredDataIntermediate : BWDeferredIntermediate {
    NSData *_archive;
}




-(id)description;
-(id)fetchAndRetain:(*int)arg0 ;
-(id)fetchWithCustomClassesAndRetain:(id)arg0 err:(*int)arg1 ;
-(int)setArchive:(id)arg0 ;
-(void)dealloc;


@end


#endif