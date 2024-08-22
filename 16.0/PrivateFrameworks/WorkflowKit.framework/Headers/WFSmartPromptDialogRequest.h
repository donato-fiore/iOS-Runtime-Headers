// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSMARTPROMPTDIALOGREQUEST_H
#define WFSMARTPROMPTDIALOGREQUEST_H

@class WFDialogRequest, WFDialogButton, NSData, WFContentCollection, NSString;
@protocol NSSecureCoding;


#import "WFSmartPromptConfiguration.h"

@interface WFSmartPromptDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *allowAlwaysButton; // ivar: _allowAlwaysButton
@property (readonly, copy, nonatomic) WFDialogButton *allowOnceButton; // ivar: _allowOnceButton
@property (copy, nonatomic) NSData *archivedSourceContentCollection; // ivar: _archivedSourceContentCollection
@property (retain, nonatomic) WFContentCollection *cachedSourceContentCollection; // ivar: _cachedSourceContentCollection
@property (readonly, copy, nonatomic) WFSmartPromptConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) WFDialogButton *denyButton; // ivar: _denyButton
@property (readonly, copy, nonatomic) WFDialogButton *previewButton; // ivar: _previewButton
@property (readonly, copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText


+(BOOL)supportsSecureCoding;
-(BOOL)shouldCenterPrompt;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 attribution:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getContentCollectionWithCompletionHandler:(id)arg0 ;


@end


#endif