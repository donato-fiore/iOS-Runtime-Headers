// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENEIDENTITY_H
#define FBSSCENEIDENTITY_H

@class NSString;
@protocol BSXPCSecureCoding, NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FBSSceneIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying, NSMutableCopying>

 {
    NSString *_internalWorkspaceIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *internalWorkspaceIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier; // ivar: _workspaceIdentifier


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)identityForIdentifier:(id)arg0 ;
+(id)identityForIdentifier:(id)arg0 workspaceIdentifier:(id)arg1 ;
+(id)identityForIdentifier:(id)arg0 workspaceIdentifier:(id)arg1 internalWorkspaceIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif