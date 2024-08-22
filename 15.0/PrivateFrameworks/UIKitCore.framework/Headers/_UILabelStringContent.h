// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILABELSTRINGCONTENT_H
#define _UILABELSTRINGCONTENT_H

@class UILabelContent, NSString;



@interface _UILabelStringContent : UILabelContent {
    NSString *_string;
    ? _flags;
}




-(BOOL)_isContentEqualToContent:(id)arg0 ;
-(BOOL)isAttributed;
-(BOOL)isEqualToAttributedString:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isNil;
-(BOOL)isWidthVariant;
-(NSInteger)length;
-(NSUInteger)hash;
-(id)attributedString;
-(id)attributedStringContent;
-(id)contentByApplyingAttribute:(id)arg0 value:(id)arg1 toRange:(struct _NSRange )arg2 ;
-(id)contentWithAttributedString:(id)arg0 ;
-(id)contentWithString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 defaultAttributes:(id)arg1 ;
-(id)string;


@end


#endif