// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMCRMUTABLEATTRIBUTEDSTRING_H
#define REMCRMUTABLEATTRIBUTEDSTRING_H

@class NSMutableAttributedString;
@protocol REMCRMutableAttributedStringEditObserver;



@interface REMCRMutableAttributedString : NSMutableAttributedString

@property (retain, nonatomic) NSMutableAttributedString *backingStore; // ivar: _backingStore
@property (weak, nonatomic) NSObject<REMCRMutableAttributedStringEditObserver> *editObserver; // ivar: _editObserver


+(BOOL)supportsSecureCoding;
+(id)allowedAttributesForModel;
+(id)nonEditableAttributes;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)string;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)reportDidEdit:(NSInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif