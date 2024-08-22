// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSSCENEATTRIBUTE_H
#define BLSSCENEATTRIBUTE_H

@class NSString, FBSSceneIdentityToken;
@protocol BSXPCCoding;


#import "BLSAttribute.h"

@interface BLSSceneAttribute : BLSAttribute <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSSceneIdentityToken *sceneIdentityToken; // ivar: _sceneIdentityToken
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFBSScene:(id)arg0 ;
-(id)initWithSceneIdentityToken:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif