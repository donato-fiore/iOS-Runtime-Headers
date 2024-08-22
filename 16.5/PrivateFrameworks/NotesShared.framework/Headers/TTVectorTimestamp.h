// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTVECTORTIMESTAMP_H
#define TTVECTORTIMESTAMP_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TTVectorTimestamp : NSObject <NSCopying>

 {
    NSMutableDictionary *_clock;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)clockForUUID:(id)arg0 ;
-(NSUInteger)compareTo:(id)arg0 ;
-(NSUInteger)subclockForUUID:(id)arg0 ;
-(id)allUUIDs;
-(id)clockElementForUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(id)sortedUUIDs;
-(void)incrementClockForUUID:(id)arg0 ;
-(void)mergeWithTimestamp:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)setClock:(NSUInteger)arg0 forUUID:(id)arg1 ;
-(void)setClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 ;


@end


#endif