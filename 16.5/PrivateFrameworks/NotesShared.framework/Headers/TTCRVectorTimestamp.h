// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTCRVECTORTIMESTAMP_H
#define TTCRVECTORTIMESTAMP_H



#import "TTVectorTimestamp.h"
#import "CRVectorTimestamp.h"

@interface TTCRVectorTimestamp : TTVectorTimestamp

@property (retain, nonatomic) CRVectorTimestamp *crTimestamp; // ivar: _crTimestamp


-(NSUInteger)clockForUUID:(id)arg0 ;
-(NSUInteger)subclockForUUID:(id)arg0 ;
-(id)allUUIDs;
-(id)clockElementForUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sortedUUIDs;
-(void)setClock:(NSUInteger)arg0 forUUID:(id)arg1 ;
-(void)setClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 ;


@end


#endif