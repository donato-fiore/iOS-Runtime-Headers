// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGCHUNKFILEREFERENCE_H
#define _OSLOGCHUNKFILEREFERENCE_H


#import <Foundation/Foundation.h>

#import "_OSLogCollectionReference.h"

@interface _OSLogChunkFileReference : NSObject {
    _OSLogCollectionReference *_oslcr;
}


@property (readonly, nonatomic) char * path; // ivar: _path
@property (readonly, nonatomic) NSUInteger xattrEndTime; // ivar: _xet
@property (readonly, nonatomic) NSUInteger xattrOldestTime; // ivar: _xot


-(BOOL)readXattrForTimespan:(*id)arg0 ;
-(id)copyMappedChunkFile:(*id)arg0 ;
-(id)initWithCollection:(id)arg0 subpath:(char *)arg1 ;
-(void)dealloc;


@end


#endif