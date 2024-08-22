// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSCENESNAPSHOTCONTEXT_H
#define FBSCENESNAPSHOTCONTEXT_H

@class BSSettings, FBSSceneClientSettings, NSString, NSDate, NSSet, FBSSceneSettings;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding>



@property (copy, nonatomic) BSSettings *clientExtendedData; // ivar: _clientExtendedData
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings; // ivar: _clientSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *layersToExclude; // ivar: _layersToExclude
@property (nonatomic, getter=isOpaque) BOOL opaque; // ivar: _opaque
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (copy, nonatomic) FBSSceneSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


+(id)contextWithFBSContext:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFBSContext:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif