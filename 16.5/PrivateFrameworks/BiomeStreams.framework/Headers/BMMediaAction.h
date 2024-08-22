// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMEDIAACTION_H
#define BMMEDIAACTION_H

@class NSString;
@protocol BMStoreData;


#import "BMEventBase.h"

@interface BMMediaAction : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAbsoluteTimestamp; // ivar: _hasAbsoluteTimestamp
@property (nonatomic) BOOL hasType; // ivar: _hasType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *mediaUUID; // ivar: _mediaUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 mediaUUID:(id)arg1 type:(int)arg2 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif