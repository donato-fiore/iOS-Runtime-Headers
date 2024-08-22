// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTATECHUYOKOFIELD_H
#define TSWPTATECHUYOKOFIELD_H



#import "TSWPSmartField.h"

@interface TSWPTateChuYokoField : TSWPSmartField



-(BOOL)allowsEditing;
-(NSUInteger)attributeArrayKind;
-(int)styleAttributeArrayKind;
-(unsigned short)smartFieldKind;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif