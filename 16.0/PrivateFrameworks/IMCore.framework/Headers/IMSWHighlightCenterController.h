// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSWHIGHLIGHTCENTERCONTROLLER_H
#define IMSWHIGHLIGHTCENTERCONTROLLER_H

@class NSString, SWHighlightCenter;
@protocol SWHighlightCenterDelegate;

#import <Foundation/Foundation.h>


@interface IMSWHighlightCenterController : NSObject <SWHighlightCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SWHighlightCenter *highlightCenter; // ivar: _highlightCenter
@property (readonly) Class superclass;


+(id)sharedController;
-(id)collaborationHighlightForURL:(id)arg0 error:(*id)arg1 ;
-(id)fetchAttributionsForHighlight:(id)arg0 ;
-(id)init;
-(void)highlightCenterHighlightsDidChange:(id)arg0 ;


@end


#endif