// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPUIATTACHMENTDATA_H
#define TSWPUIATTACHMENTDATA_H


#import <Foundation/Foundation.h>

#import "TSWPUIGraphicalAttachment.h"

@interface TSWPUIAttachmentData : NSObject

@property (readonly, nonatomic) TSWPUIGraphicalAttachment *attachment; // ivar: _attachment
@property (readonly, nonatomic) NSInteger charIndex; // ivar: _charIndex
@property (readonly, nonatomic) CGPoint location; // ivar: _location


-(id)initWithAttachment:(id)arg0 location:(struct CGPoint )arg1 charIndex:(NSInteger)arg2 ;
-(void)adjustAlignmentBy:(CGFloat)arg0 ;


@end


#endif