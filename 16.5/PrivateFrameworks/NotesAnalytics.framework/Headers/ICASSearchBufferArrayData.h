// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSEARCHBUFFERARRAYDATA_H
#define ICASSEARCHBUFFERARRAYDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSearchBufferArrayData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *isResultSelected; // ivar: _isResultSelected
@property (readonly, nonatomic) NSNumber *nonTopHitCount; // ivar: _nonTopHitCount
@property (readonly, nonatomic) NSNumber *nonTopHitRawCount; // ivar: _nonTopHitRawCount
@property (readonly, nonatomic) NSNumber *searchStringLength; // ivar: _searchStringLength
@property (readonly, nonatomic) NSNumber *topHitCount; // ivar: _topHitCount


+(id)dataName;
-(id)initWithSearchStringLength:(id)arg0 topHitCount:(id)arg1 nonTopHitCount:(id)arg2 isResultSelected:(id)arg3 nonTopHitRawCount:(id)arg4 ;
-(id)toDict;


@end


#endif