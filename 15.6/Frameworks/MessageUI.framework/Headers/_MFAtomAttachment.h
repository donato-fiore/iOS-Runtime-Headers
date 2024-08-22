// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFATOMATTACHMENT_H
#define _MFATOMATTACHMENT_H

@class NSTextAttachment;


#import "_MFAtomLayoutView.h"

@interface _MFAtomAttachment : NSTextAttachment

@property (readonly, nonatomic) _MFAtomLayoutView *atomView; // ivar: _atomView
@property (readonly, nonatomic) id *representedObject; // ivar: _representedObject


+(id)attachmentWithAtomLayoutView:(id)arg0 representedObject:(id)arg1 ;
-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(id)initWithAtomLayoutView:(id)arg0 representedObject:(id)arg1 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif