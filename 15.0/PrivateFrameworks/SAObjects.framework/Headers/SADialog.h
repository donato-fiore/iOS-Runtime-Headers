// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADIALOG_H
#define SADIALOG_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseAceObject.h"
#import "SADialogText.h"
#import "SADialogConfiguration.h"

@interface SADialog : SABaseAceObject <SAAceSerializable>



@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) SADialogText *caption;
@property (retain, nonatomic) SADialogConfiguration *configuration;
@property (retain, nonatomic) SADialogText *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL printedOnly;
@property (nonatomic) BOOL spokenOnly;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif