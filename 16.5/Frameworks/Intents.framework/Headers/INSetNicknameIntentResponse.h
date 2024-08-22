// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSETNICKNAMEINTENTRESPONSE_H
#define INSETNICKNAMEINTENTRESPONSE_H

@class NSString;
@protocol INSetNicknameIntentResponseExport;


#import "INIntentResponse.h"
#import "INContactCard.h"

@interface INSetNicknameIntentResponse : INIntentResponse <INSetNicknameIntentResponseExport>



@property (readonly, nonatomic) NSInteger code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INContactCard *meCard;
@property (readonly) Class superclass;


+(BOOL)_appLaunchRequestedFromCode:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_codeFromType:(int)arg0 errorCode:(int)arg1 appLaunchRequested:(BOOL)arg2 ;
+(int)_errorCodeFromCode:(NSInteger)arg0 ;
+(int)_typeFromCode:(NSInteger)arg0 ;
-(NSInteger)_codeWithName:(id)arg0 ;
-(NSInteger)_intentResponseCode;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesByName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPropertiesByName:(id)arg0 ;


@end


#endif