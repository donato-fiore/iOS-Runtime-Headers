// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSAFARIPAGEVIEWEVENT_H
#define BMSAFARIPAGEVIEWEVENT_H

@class NSString, NSURL;
@protocol BMIdentifiableContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMSafariPageViewEvent : NSObject <BMIdentifiableContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *content; // ivar: _content
@property (readonly, nonatomic) BOOL contentIsReaderText; // ivar: _contentIsReaderText
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (readonly, nonatomic) NSURL *url; // ivar: _url


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
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 title:(id)arg3 content:(id)arg4 contentIsReaderText:(BOOL)arg5 url:(id)arg6 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 title:(id)arg3 content:(id)arg4 contentIsReaderText:(BOOL)arg5 url:(id)arg6 contentProtection:(id)arg7 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif