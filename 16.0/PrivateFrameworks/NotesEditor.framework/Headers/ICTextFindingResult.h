// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTFINDINGRESULT_H
#define ICTEXTFINDINGRESULT_H


#import <Foundation/Foundation.h>


@interface ICTextFindingResult : NSObject

@property (nonatomic, getter=isAttachmentResult) BOOL attachmentResult; // ivar: _attachmentResult
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (nonatomic) _NSRange range; // ivar: _range


-(NSInteger)compare:(id)arg0 ;
-(id)framesForHighlightInTextView:(id)arg0 ;
-(id)viewForHighlightsInTextView:(id)arg0 ;


@end


#endif