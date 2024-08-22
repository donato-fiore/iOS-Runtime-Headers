// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMENTIONITEM_H
#define PKMENTIONITEM_H

@class NSString, NSUUID;


#import "PKDetectionItem.h"

@interface PKMentionItem : PKDetectionItem

@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSString *mentionResult;
@property (readonly, nonatomic) NSUUID *mentionUUID;


+(id)mentionItemWithQueryItem:(id)arg0 sessionManager:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_actionNameForActivation:(BOOL)arg0 ;
-(id)_baselinePath;
-(id)description;
-(id)strokeColor;
-(void)clearActiveInDrawing:(id)arg0 ;
-(void)invalidateUUID;


@end


#endif