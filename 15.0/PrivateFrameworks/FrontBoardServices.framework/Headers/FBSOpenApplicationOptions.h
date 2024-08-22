// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSOPENAPPLICATIONOPTIONS_H
#define FBSOPENAPPLICATIONOPTIONS_H

@class NSString, NSDictionary, NSURL;
@protocol BSXPCCoding, BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *dictionary; // ivar: _payload
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;


+(BOOL)supportsBSXPCSecureCoding;
+(id)optionsWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_sanitizeAndValidatePayload;
-(void)_updateOption:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif