// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTUALATTACHMENT_H
#define TSWPTEXTUALATTACHMENT_H



#import "TSWPAttachment.h"

@interface TSWPTextualAttachment : TSWPAttachment



-(BOOL)shouldArchiveStringEquivalent;
-(id)stringEquivalent;
-(id)stringEquivalentWithLayoutParent:(id)arg0 ;
-(id)stringWithPageNumber:(NSUInteger)arg0 pageCount:(NSUInteger)arg1 charIndex:(NSUInteger)arg2 ;
-(void)setStringEquivalent:(id)arg0 ;


@end


#endif