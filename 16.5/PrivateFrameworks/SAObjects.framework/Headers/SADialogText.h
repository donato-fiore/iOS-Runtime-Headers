// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADIALOGTEXT_H
#define SADIALOGTEXT_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseAceObject.h"

@interface SADialogText : SABaseAceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *speakableTextOverride;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif