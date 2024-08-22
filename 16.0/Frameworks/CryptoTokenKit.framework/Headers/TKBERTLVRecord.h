// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKBERTLVRECORD_H
#define TKBERTLVRECORD_H



#import "TKTLVRecord.h"

@interface TKBERTLVRecord : TKTLVRecord



+(NSUInteger)encodeNumber:(NSUInteger)arg0 into:(char *)arg1 ;
+(id)dataForTag:(NSUInteger)arg0 ;
+(id)parseFromDataSource:(id)arg0 ;
+(id)zuluDateFormatter;
-(id)initWithPropertyList:(id)arg0 ;
-(id)initWithTag:(NSUInteger)arg0 records:(id)arg1 ;
-(id)initWithTag:(NSUInteger)arg0 value:(id)arg1 ;
-(id)propertyList;


@end


#endif