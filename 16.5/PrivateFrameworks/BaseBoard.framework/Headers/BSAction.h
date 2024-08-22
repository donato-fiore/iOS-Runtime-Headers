// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSACTION_H
#define BSACTION_H

@class NSString;
@protocol BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_BSActionResponder.h"
#import "BSSettings.h"

@interface BSAction : NSObject <BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable>

 {
    _BSActionResponder *_responder;
    BOOL _isImplicitOriginator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_expectsResponse) BOOL expectsResponse;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) BSSettings *info; // ivar: _info
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)canSendResponse;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfo:(id)arg0 responder:(id)arg1 ;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)invalidate;
-(void)sendResponse:(id)arg0 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg0 ;
-(void)setNullificationHandler:(id)arg0 ;


@end


#endif