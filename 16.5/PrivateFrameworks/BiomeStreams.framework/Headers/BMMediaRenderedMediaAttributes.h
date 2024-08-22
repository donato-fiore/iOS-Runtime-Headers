// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMEDIARENDEREDMEDIAATTRIBUTES_H
#define BMMEDIARENDEREDMEDIAATTRIBUTES_H

@class NSString;
@protocol BMStoreData;


#import "BMEventBase.h"

@interface BMMediaRenderedMediaAttributes : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif