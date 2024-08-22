// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKVECTORTIMESTAMP_H
#define PKVECTORTIMESTAMP_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, CHStrokeProviderVersion;

#import <Foundation/Foundation.h>


@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion>

 {
    NSMutableDictionary *_clock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 ;
-(NSUInteger)clockForUUID:(id)arg0 ;
-(NSUInteger)compareTo:(id)arg0 ;
-(NSUInteger)subclockForUUID:(id)arg0 ;
-(id)allUUIDs;
-(id)clockElementForUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(id)shortDescription;
-(id)sortedUUIDs;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementClockForUUID:(id)arg0 ;
-(void)mergeWithTimestamp:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)setClock:(NSUInteger)arg0 forUUID:(id)arg1 ;
-(void)setClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 ;
-(void)unionClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 ;


@end


#endif