// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUITEMPLATETABULARDATAROWACTIONSHOWMODALSNIPPET_H
#define SAUITEMPLATETABULARDATAROWACTIONSHOWMODALSNIPPET_H

@protocol SAServerBoundCommand;


#import "SAUITemplateTabularDataRowAction.h"

@interface SAUITemplateTabularDataRowActionShowModalSnippet : SAUITemplateTabularDataRowAction

@property (retain, nonatomic) NSObject<SAServerBoundCommand> *fetchContentCommand;


+(id)tabularDataRowActionShowModalSnippet;
+(id)tabularDataRowActionShowModalSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif