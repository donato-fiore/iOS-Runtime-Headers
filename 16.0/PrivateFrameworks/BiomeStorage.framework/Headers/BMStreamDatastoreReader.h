// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTREAMDATASTOREREADER_H
#define BMSTREAMDATASTOREREADER_H


#import <Foundation/Foundation.h>

#import "BMStreamDatastore.h"

@interface BMStreamDatastoreReader : NSObject

@property (readonly, nonatomic) BOOL canReadOrPruneData;
@property (readonly, nonatomic) BMStreamDatastore *inner; // ivar: _inner


-(Class)eventBodyClass;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)initWithStream:(id)arg0 config:(id)arg1 ;
-(id)newEnumeratorFromBookmark:(id)arg0 ;
-(id)newEnumeratorFromBookmark:(id)arg0 options:(NSUInteger)arg1 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 maxEvents:(NSUInteger)arg2 lastN:(NSUInteger)arg3 options:(NSUInteger)arg4 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 maxEvents:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(id)streamIdentifier;


@end


#endif