// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPHOTOSPHOTOVIEWEVENT_H
#define BMPHOTOSPHOTOVIEWEVENT_H

@class NSString, NSArray;
@protocol BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMPhotosPhotoViewEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly) Class superclass;
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
-(id)initWithUniqueId:(id)arg0 locations:(id)arg1 absoluteTimestamp:(CGFloat)arg2 ;
-(id)initWithUniqueId:(id)arg0 locations:(id)arg1 absoluteTimestamp:(CGFloat)arg2 contentProtection:(id)arg3 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif