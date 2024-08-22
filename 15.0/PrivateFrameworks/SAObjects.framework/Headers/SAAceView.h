// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAACEVIEW_H
#define SAACEVIEW_H

@class NSString, NSNumber, NSDictionary;
@protocol SAAceSerializable;


#import "SABaseAceObject.h"
#import "SADialog.h"
#import "SAUIListenAfterSpeakingBehavior.h"

@interface SAAceView : SABaseAceObject <SAAceSerializable>



@property (nonatomic) BOOL canBeRefreshed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) NSObject<SAAceSerializable> *context;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *deferredRendering;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SADialog *dialog;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTransient;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *speakableText;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *viewId;


+(id)aceView;
+(id)aceViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif