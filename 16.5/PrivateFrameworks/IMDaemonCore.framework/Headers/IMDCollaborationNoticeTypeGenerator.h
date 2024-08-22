// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCOLLABORATIONNOTICETYPEGENERATOR_H
#define IMDCOLLABORATIONNOTICETYPEGENERATOR_H

@class SWHighlightCenter;

#import <Foundation/Foundation.h>


@interface IMDCollaborationNoticeTypeGenerator : NSObject

@property (readonly, nonatomic) SWHighlightCenter *highlightCenter; // ivar: _highlightCenter


+(id)sharedGenerator;
-(NSInteger)processMentionForPersonHandle:(id)arg0 ;
-(NSInteger)processMentionForPersonIdentity:(id)arg0 highlightURL:(id)arg1 ;
-(NSInteger)typeForHighlightEvent:(id)arg0 ;
-(id)init;


@end


#endif