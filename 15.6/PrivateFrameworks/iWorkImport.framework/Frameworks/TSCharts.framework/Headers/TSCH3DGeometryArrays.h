// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DGEOMETRYARRAYS_H
#define TSCH3DGEOMETRYARRAYS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DGeometryArrays : NSObject <NSCopying>



@property (readonly, nonatomic) range<unsigned int> capRange;
@property (readonly, nonatomic) unsigned int capcount; // ivar: _capcount
@property (readonly, nonatomic) unsigned int capoffset; // ivar: _capoffset
@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) range<unsigned int> emptyRange;
@property (readonly, nonatomic) unsigned int offset; // ivar: _offset
@property (readonly, nonatomic) range<unsigned int> range;
@property (readonly, nonatomic) range<unsigned int> wholeRange;


+(id)arraysWithOffset:(unsigned int)arg0 count:(unsigned int)arg1 capoffset:(unsigned int)arg2 capcount:(unsigned int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOffset:(unsigned int)arg0 count:(unsigned int)arg1 capoffset:(unsigned int)arg2 capcount:(unsigned int)arg3 ;


@end


#endif