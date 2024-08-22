// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPUIGRAPHICALATTACHMENT_H
#define TSWPUIGRAPHICALATTACHMENT_H



#import "TSWPAttachment.h"

@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (readonly, nonatomic) CGFloat baselineOffset;
@property (readonly, nonatomic) CGSize size;


-(BOOL)wantsSelectionAtPoint:(struct CGPoint )arg0 ;
-(id)rendererForAttachment;
-(int)elementKind;
-(void)invalidate;


@end


#endif