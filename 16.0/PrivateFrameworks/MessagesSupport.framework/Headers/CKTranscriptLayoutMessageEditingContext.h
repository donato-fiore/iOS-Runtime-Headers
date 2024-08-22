// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTLAYOUTMESSAGEEDITINGCONTEXT_H
#define CKTRANSCRIPTLAYOUTMESSAGEEDITINGCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKTranscriptLayoutMessageEditingContext : NSObject

@property (retain, nonatomic) NSString *editedMessageGuid; // ivar: _editedMessageGuid
@property (nonatomic) CGFloat editedMessageHeight; // ivar: _editedMessageHeight


-(BOOL)isEqualToContext:(id)arg0 ;
-(id)initWithEditedMessageGuid:(id)arg0 editedMessageHeight:(CGFloat)arg1 ;


@end


#endif