// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMNEWSARTICLEVIEWEVENT_H
#define BMNEWSARTICLEVIEWEVENT_H

@class NSString;
@protocol BMIdentifiableContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMNewsArticleViewEvent : NSObject <BMIdentifiableContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *content; // ivar: _content
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *publication; // ivar: _publication
@property (readonly, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId


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
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 title:(id)arg3 content:(id)arg4 summary:(id)arg5 publication:(id)arg6 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 title:(id)arg3 content:(id)arg4 summary:(id)arg5 publication:(id)arg6 contentProtection:(id)arg7 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif