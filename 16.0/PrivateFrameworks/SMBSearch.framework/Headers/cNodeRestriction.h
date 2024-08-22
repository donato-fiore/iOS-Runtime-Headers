// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNODERESTRICTION_H
#define CNODERESTRICTION_H

@class NSMutableArray;
@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>


@interface cNodeRestriction : NSObject <RestrictionProtocol>



@property (retain) NSMutableArray *restrictArray; // ivar: _restrictArray
@property int restrictId; // ivar: restrictId
@property unsigned int ulType; // ivar: ulType
@property unsigned int weight; // ivar: weight


-(id)initWithType:(unsigned int)arg0 Weight:(unsigned int)arg1 ;
-(int)appendRestriction:(id)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)restrictionNumber;
-(unsigned int)get_ultype;
-(unsigned int)nodeCount;


@end


#endif