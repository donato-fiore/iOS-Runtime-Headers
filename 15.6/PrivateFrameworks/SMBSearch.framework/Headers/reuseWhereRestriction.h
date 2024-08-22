// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REUSEWHERERESTRICTION_H
#define REUSEWHERERESTRICTION_H

@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>


@interface reuseWhereRestriction : NSObject <RestrictionProtocol>



@property int restrictId; // ivar: restrictId
@property unsigned int resuseWhereID; // ivar: _resuseWhereID
@property unsigned int ulType; // ivar: ulType
@property unsigned int weight; // ivar: weight


-(id)initWithReuseWhereID:(unsigned int)arg0 Weight:(unsigned int)arg1 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)restrictionNumber;
-(unsigned int)get_ultype;


@end


#endif