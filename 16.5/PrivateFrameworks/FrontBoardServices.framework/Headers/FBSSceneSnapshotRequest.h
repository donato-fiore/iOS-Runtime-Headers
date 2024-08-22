// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENESNAPSHOTREQUEST_H
#define FBSSCENESNAPSHOTREQUEST_H

@class NSString;
@protocol BSXPCCoding, FBSSceneSnapshotRequestDelegate;

#import <Foundation/Foundation.h>

#import "FBSSceneSettings.h"

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding>

 {
    BOOL _handled;
}


@property (readonly, nonatomic) BOOL allowsProtectedContent; // ivar: _allowsProtectedContent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSSceneSnapshotRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (readonly, copy, nonatomic) FBSSceneSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


-(BOOL)performSnapshotWithContext:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 allowsProtectedContent:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif