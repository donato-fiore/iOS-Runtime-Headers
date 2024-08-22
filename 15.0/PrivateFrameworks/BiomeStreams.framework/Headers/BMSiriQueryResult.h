// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSIRIQUERYRESULT_H
#define BMSIRIQUERYRESULT_H

@class NSString;
@protocol BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMSiriQueryResult : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *qid; // ivar: _qid
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithQID:(id)arg0 domain:(id)arg1 confidence:(CGFloat)arg2 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif