// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPARSECSEARCHENGAGEMENTEVENT_H
#define BMPARSECSEARCHENGAGEMENTEVENT_H

@class NSString, NSArray;
@protocol BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMParsecSearchEngagementEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *completedQuery; // ivar: _completedQuery
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly, nonatomic) NSArray *entities; // ivar: _entities
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *resultId; // ivar: _resultId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (readonly, nonatomic) NSString *userInput; // ivar: _userInput


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueId:(id)arg0 resultId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(CGFloat)arg3 userInput:(id)arg4 completedQuery:(id)arg5 entities:(id)arg6 ;
-(id)initWithUniqueId:(id)arg0 resultId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(CGFloat)arg3 userInput:(id)arg4 completedQuery:(id)arg5 entities:(id)arg6 contentProtection:(id)arg7 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif