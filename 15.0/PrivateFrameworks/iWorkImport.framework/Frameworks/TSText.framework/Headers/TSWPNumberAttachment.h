// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPNUMBERATTACHMENT_H
#define TSWPNUMBERATTACHMENT_H

@class NSString;


#import "TSWPTextualAttachment.h"

@interface TSWPNumberAttachment : TSWPTextualAttachment {
    NSString *_stringValue;
}


@property (copy, nonatomic) NSString *numberFormat; // ivar: _numberFormat


+(Class)classForUnarchiver:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)stringEquivalent;
-(id)stringEquivalentWithNumberProvider:(id)arg0 ;
-(id)stringWithNumber:(NSUInteger)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)performTemplateLocalization:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setStringValue:(id)arg0 forPasteboardController:(id)arg1 ;


@end


#endif