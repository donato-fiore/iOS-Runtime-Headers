// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTMESSAGEITEM_H
#define SASTMESSAGEITEM_H

@class NSURL, NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTMessageItem : AceObject <SASTTemplateItem>



@property (copy, nonatomic) NSURL *audioMessageURL;
@property (copy, nonatomic) NSString *bundleId;
@property (retain, nonatomic) SAUIDecoratedText *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *recipient;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly) Class superclass;


+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif