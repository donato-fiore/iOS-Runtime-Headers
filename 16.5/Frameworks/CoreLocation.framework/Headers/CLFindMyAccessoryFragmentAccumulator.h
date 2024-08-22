// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFINDMYACCESSORYFRAGMENTACCUMULATOR_H
#define CLFINDMYACCESSORYFRAGMENTACCUMULATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryFragmentAccumulator : NSObject

@property (nonatomic) NSUInteger maxBytesPerUUID; // ivar: _maxBytesPerUUID
@property (nonatomic) NSMutableDictionary *uuidToData; // ivar: _uuidToData


+(id)convertDataStatusToString:(NSUInteger)arg0 ;
-(BOOL)appendData:(id)arg0 forUUID:(id)arg1 ;
-(BOOL)clearForUUID:(id)arg0 ;
-(NSUInteger)getDataStatusForUUID:(id)arg0 ;
-(id)dataForUUID:(id)arg0 ;
-(id)initWithMaxBytesPerUUID:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif