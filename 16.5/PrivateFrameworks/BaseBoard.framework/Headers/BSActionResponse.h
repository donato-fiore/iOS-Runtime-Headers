// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSACTIONRESPONSE_H
#define BSACTIONRESPONSE_H

@class NSString, NSError;
@protocol NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "BSAuditToken.h"
#import "BSSettings.h"

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding>



@property (readonly, copy, nonatomic) BSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) BSSettings *info; // ivar: _info
@property (readonly) Class superclass;


+(id)response;
+(id)responseForError:(id)arg0 ;
+(id)responseWithInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithInfo:(id)arg0 error:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif