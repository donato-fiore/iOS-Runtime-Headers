// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSWORKSPACESCENEREQUESTOPTIONS_H
#define FBSWORKSPACESCENEREQUESTOPTIONS_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "FBSSceneClientSettings.h"
#import "FBSSceneSpecification.h"

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) FBSSceneClientSettings *initialClientSettings; // ivar: _initialClientSettings
@property (nonatomic, getter=isKeyboardScene) BOOL keyboardScene; // ivar: _keyboardScene
@property (copy, nonatomic) FBSSceneSpecification *specification; // ivar: _specification
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif