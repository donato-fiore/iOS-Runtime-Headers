// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTINDEXINGCHUNK_H
#define TSTINDEXINGCHUNK_H


#import <Foundation/Foundation.h>


@interface TSTIndexingChunk : NSObject {
    vector<std::vector<NSString *>, std::allocator<std::vector<NSString *>>> _wordFragmentsList;
    ? _headerCoords;
}


@property (readonly, nonatomic) NSUInteger size;
@property (readonly, nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID


-(*void)headerCoords;
-(*void)wordFragmentsList;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 ;
-(void)addHeaderWordFragments:(*void)arg0 atCoord:(struct TSKUIDStructCoord *)arg1 ;


@end


#endif