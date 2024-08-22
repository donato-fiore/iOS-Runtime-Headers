// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONEXECUTABLESPECIFICATION_H
#define ATXPROACTIVESUGGESTIONEXECUTABLESPECIFICATION_H

@class NSData, NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionExecutableSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

 {
    id<ATXSuggestionExecutableProtocol> *_executableObject;
}


@property (readonly, nonatomic) NSData *executable; // ivar: _executable
@property (readonly, nonatomic) NSString *executableClassString; // ivar: _executableClassString
@property (readonly, nonatomic) NSString *executableDescription; // ivar: _executableDescription
@property (readonly, nonatomic) NSString *executableIdentifier; // ivar: _executableIdentifier
@property (readonly) NSObject<ATXSuggestionExecutableProtocol> *executableObject;
@property (readonly, nonatomic) NSUInteger executableObjectHash; // ivar: _executableObjectHash
@property (readonly, nonatomic) NSInteger executableType; // ivar: _executableType


+(BOOL)supportsSecureCoding;
+(id)stringForExecutableType:(NSInteger)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSUInteger:(NSUInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)fuzzyIsEqualToExecutableSpecification:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allowedExecutableClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)executableDataFromExecutableObject:(id)arg0 executableClassStringFromObject:(id)arg1 ;
-(id)executableObjectFromData:(id)arg0 executableClassString:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExecutable:(id)arg0 executableObjectHash:(NSUInteger)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4 suggestionExecutableType:(NSInteger)arg5 ;
-(id)initWithExecutable:(id)arg0 expectedExecutableClassString:(id)arg1 executableDescription:(id)arg2 executableIdentifier:(id)arg3 ;
-(id)initWithExecutable:(id)arg0 expectedExecutableClassString:(id)arg1 executableDescription:(id)arg2 executableIdentifier:(id)arg3 suggestionExecutableType:(NSInteger)arg4 ;
-(id)initWithExecutableObject:(id)arg0 executableDescription:(id)arg1 executableIdentifier:(id)arg2 suggestionExecutableType:(NSInteger)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif