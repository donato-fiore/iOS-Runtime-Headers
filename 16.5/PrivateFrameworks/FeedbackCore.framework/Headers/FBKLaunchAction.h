// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKLAUNCHACTION_H
#define FBKLAUNCHACTION_H

@class NSString, NSMutableDictionary, NSNumber, NSSet, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "FBKCustomBehavior.h"
#import "FBKBugFormStub.h"
#import "FBKTeam.h"

@interface FBKLaunchAction : NSObject

@property (retain, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSMutableDictionary *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSNumber *bugFormID;
@property (retain, nonatomic) NSNumber *bugformIDFromURL; // ivar: _bugformIDFromURL
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *configurationToken; // ivar: _configurationToken
@property (retain, nonatomic) FBKCustomBehavior *customBehavior; // ivar: _customBehavior
@property (retain, nonatomic) FBKBugFormStub *exactMatchFormStub; // ivar: _exactMatchFormStub
@property (retain, nonatomic) NSSet *extensions; // ivar: _extensions
@property (retain, nonatomic) NSNumber *ffuID; // ivar: _ffuID
@property (retain, nonatomic) NSString *formIdentifier; // ivar: _formIdentifier
@property (readonly, nonatomic) BOOL isCaptive;
@property (retain, nonatomic) NSString *isCaptiveFromURL; // ivar: _isCaptiveFromURL
@property (retain, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (readonly, nonatomic) BOOL launchesDraft;
@property (readonly, nonatomic) NSString *loginToken; // ivar: _loginToken
@property (retain, nonatomic) NSDictionary *queryItemsFromURL; // ivar: _queryItemsFromURL
@property (readonly, nonatomic) NSDictionary *questionAnswerPairs;
@property (retain, nonatomic) NSDictionary *questionAnswerPairsFromURL; // ivar: _questionAnswerPairsFromURL
@property (readonly, nonatomic) BOOL shouldMakeFBAVisible; // ivar: _shouldMakeFBAVisible
@property (retain, nonatomic) NSString *shouldMakeVisibleFromURL; // ivar: _shouldMakeVisibleFromURL
@property (readonly, nonatomic) BOOL shouldNotifyOnUpload;
@property (retain, nonatomic) NSString *shouldNotifyOnUploadFromURL; // ivar: _shouldNotifyOnUploadFromURL
@property (readonly, nonatomic) BOOL shouldUndoMakeFBAVisible; // ivar: _shouldUndoMakeFBAVisible
@property (retain, nonatomic) FBKTeam *teamForExactMatchFormStub; // ivar: _teamForExactMatchFormStub
@property (nonatomic) NSUInteger teamType; // ivar: _teamType
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)actionWithURL:(id)arg0 ;
+(id)formStubsWithIdentifier:(id)arg0 bugFormStubs:(id)arg1 ;
+(id)hostBundleIdentifier;
+(id)mappingForBundleID:(id)arg0 ;
+(id)preferredTeamForLaunchAction:(id)arg0 withFormStubs:(id)arg1 ;
+(id)urlSchemeForFeedbackID:(id)arg0 ;
+(id)validateURLSchemeFilePathsDictionary:(id)arg0 ;
-(BOOL)handlesLogin;
-(BOOL)hasPendingSysdiagnoseInAttachments;
-(BOOL)isFFUAction;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(void)addCustomBehavior:(id)arg0 ;
-(void)findExactMatchFormStubAndTeamWithFormStubs:(id)arg0 ;


@end


#endif