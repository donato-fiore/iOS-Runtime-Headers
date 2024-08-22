// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTEXTUALATTACHMENT_H
#define TSWPTEXTUALATTACHMENT_H

@class NSString;


#import "TSWPAttachment.h"

@interface TSWPTextualAttachment : TSWPAttachment

@property (readonly, nonatomic) NSString *stringEquivalent;


+(Class)classForUnarchiver:(id)arg0 ;
-(BOOL)shouldArchiveStringEquivalent;
-(id)stringEquivalentWithLayoutParent:(id)arg0 ;
-(id)stringEquivalentWithNumberProvider:(id)arg0 ;
-(id)stringWithPageNumber:(NSUInteger)arg0 pageCount:(NSUInteger)arg1 charIndex:(NSUInteger)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif