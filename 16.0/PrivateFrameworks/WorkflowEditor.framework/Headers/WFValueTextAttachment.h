// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFVALUETEXTATTACHMENT_H
#define WFVALUETEXTATTACHMENT_H

@class NSTextAttachment, NSDictionary, NSAttributedString, NSString;



@interface WFValueTextAttachment : NSTextAttachment

@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) UIEdgeInsets borderInsets;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSAttributedString *displayString; // ivar: _displayString
@property (nonatomic) BOOL requiresRedraw; // ivar: _requiresRedraw
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) UIEdgeInsets textInsets;
@property (retain, nonatomic) id *value;
@property (readonly, nonatomic) NSString *valueName;


+(id)humanReadableStringFromValueTextAttributedString:(id)arg0 ;
-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif