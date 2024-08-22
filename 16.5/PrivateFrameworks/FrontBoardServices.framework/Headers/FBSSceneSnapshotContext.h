// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENESNAPSHOTCONTEXT_H
#define FBSSCENESNAPSHOTCONTEXT_H

@class BSSettings, NSString, NSSet;
@protocol BSXPCCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSSceneSettings.h"

@interface FBSSceneSnapshotContext : NSObject <BSXPCCoding, BSDescriptionProviding>



@property (copy, nonatomic) BSSettings *clientExtendedData; // ivar: _clientExtendedData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expirationInterval; // ivar: _expirationInterval
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *layersToExclude; // ivar: _layersToExclude
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (copy, nonatomic) FBSSceneSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


+(id)contextWithSceneID:(id)arg0 settings:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSceneID:(id)arg0 settings:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif