// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPOSTSIRIENGAGEMENTEVENTSIGNALCONTENT_H
#define BMPOSTSIRIENGAGEMENTEVENTSIGNALCONTENT_H

@class NSString;
@protocol BMStoreData;


#import "BMEventBase.h"

@interface BMPostSiriEngagementEventSignalContent : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif