// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSWORKSPACESCENEREMNANT_H
#define FBSWORKSPACESCENEREMNANT_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "FBSSceneParameters.h"

@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters; // ivar: _parameters
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)_initWithIdentifier:(id)arg0 group:(id)arg1 parameters:(id)arg2 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif