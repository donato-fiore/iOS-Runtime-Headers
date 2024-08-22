// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSWORKSPACESCENEREMNANT_H
#define FBSWORKSPACESCENEREMNANT_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "FBSSceneIdentity.h"
#import "FBSSceneParameters.h"

@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FBSSceneIdentity *identity; // ivar: _identity
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters; // ivar: _parameters
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)_initWithIdentity:(id)arg0 parameters:(id)arg1 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif