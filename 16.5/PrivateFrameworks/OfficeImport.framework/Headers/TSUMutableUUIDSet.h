// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUMUTABLEUUIDSET_H
#define TSUMUTABLEUUIDSET_H



#import "TSUUUIDSet.h"

@interface TSUMutableUUIDSet : TSUUUIDSet



-(BOOL)addUUID:(*void)arg0 ;
-(BOOL)removeUUID:(*void)arg0 ;
-(void)addUUIDs:(*void)arg0 ;
-(void)addUuidsFromSet:(id)arg0 ;
-(void)addUuidsFromVector:(*void)arg0 ;
-(void)removeAllUuids;
-(void)removeUUIDs:(*void)arg0 ;
-(void)removeUuidsFromSet:(id)arg0 ;
-(void)removeUuidsFromVector:(*void)arg0 ;


@end


#endif