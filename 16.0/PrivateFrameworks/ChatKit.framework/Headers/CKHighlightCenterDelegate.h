// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKHIGHLIGHTCENTERDELEGATE_H
#define CKHIGHLIGHTCENTERDELEGATE_H

@class NSString, SWHighlightCenter;
@protocol SWHighlightCenterDelegate;

#import <Foundation/Foundation.h>


@interface CKHighlightCenterDelegate : NSObject <SWHighlightCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SWHighlightCenter *highlightCenter; // ivar: _highlightCenter
@property (copy, nonatomic) id *performOnHighlightsDidChange; // ivar: _performOnHighlightsDidChange
@property (readonly) Class superclass;


+(BOOL)shouldAddCollaboration:(id)arg0 toFaceTimeConversation:(id)arg1 forIMChat:(id)arg2 ;
-(id)initWithComposition:(id)arg0 faceTimeConversation:(id)arg1 imChat:(id)arg2 chatController:(id)arg3 backgroundTaskID:(NSUInteger)arg4 ;
-(void)highlightCenterHighlightsDidChange:(id)arg0 ;


@end


#endif