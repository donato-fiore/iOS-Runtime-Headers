// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSACTION_H
#define BCSACTION_H

@class UIImage, NSArray, CPSClipMetadataRequest, NSString, NSDictionary, NSURL;
@protocol BCSActionPrivate, BCSAction, BCSCodePayload, BCSParsedDataPrivate, BCSActionDelegate;

#import <Foundation/Foundation.h>

#import "BCSActionPickerViewAssistant.h"
#import "BCSDetectedCode.h"

@interface BCSAction : NSObject <BCSActionPrivate, BCSAction>

 {
    BCSActionPickerViewAssistant *_actionPickerViewAssistant;
}


@property (readonly, nonatomic) UIImage *actionIcon;
@property (readonly, copy, nonatomic) NSArray *actionPickerItems;
@property (readonly, copy, nonatomic) NSArray *appLinks; // ivar: appLinks
@property (retain, nonatomic) CPSClipMetadataRequest *clipMetadataRequest; // ivar: clipMetadataRequest
@property (readonly, nonatomic) NSObject<BCSCodePayload> *codePayload; // ivar: _codePayload
@property (readonly, nonatomic) NSInteger codeType;
@property (readonly, nonatomic) NSString *contentPreviewString; // ivar: _contentPreviewString
@property (readonly, nonatomic) NSObject<BCSParsedDataPrivate> *data; // ivar: _data
@property (readonly, nonatomic) NSString *dataTypeDisplayString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property (readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property (weak, nonatomic) NSObject<BCSActionDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BCSDetectedCode *detectedCode; // ivar: _detectedCode
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly, nonatomic) BOOL hasSensitiveURL; // ivar: hasSensitiveURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAMSAction; // ivar: isAMSAction
@property (readonly, nonatomic) BOOL isInvalidDataAction; // ivar: isInvalidDataAction
@property (readonly, nonatomic) BOOL isPasskeyAction; // ivar: isPasskeyAction
@property (readonly, nonatomic) BOOL isPasskeyAssertionAction; // ivar: isPasskeyAssertionAction
@property (readonly, nonatomic) BOOL isPasskeyRegistrationAction; // ivar: isPasskeyRegistrationAction
@property (readonly, nonatomic) BOOL isWiFiAction; // ivar: isWiFiAction
@property (readonly, copy, nonatomic) NSString *localizedActionDescription;
@property (readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property (readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property (readonly, nonatomic) NSArray *menuElements;
@property (readonly, nonatomic) NSUInteger menuElementsCount;
@property (readonly, nonatomic) id *menuProvider;
@property (readonly, nonatomic) NSInteger payloadDataType;
@property (readonly, nonatomic) BOOL preferItemsInSubmenu;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) BOOL shouldRequireUserToPickTargetApp; // ivar: shouldRequireUserToPickTargetApp
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSURL *urlThatCanBeOpened; // ivar: urlThatCanBeOpened


+(void)getActionWithData:(id)arg0 codePayload:(id)arg1 completionHandler:(id)arg2 ;
-(NSInteger)type;
-(id)_fallbackDataTypeDisplayString;
-(id)initWithData:(id)arg0 codePayload:(id)arg1 ;
-(id)subMenuWithMenuItems:(id)arg0 ;
-(void)determineActionabilityWithCompletionHandler:(id)arg0 ;
-(void)performAction;
-(void)performActionWithCompletion:(id)arg0 ;
-(void)performActionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)performDefaultAction;
-(void)showActionPicker;


@end


#endif