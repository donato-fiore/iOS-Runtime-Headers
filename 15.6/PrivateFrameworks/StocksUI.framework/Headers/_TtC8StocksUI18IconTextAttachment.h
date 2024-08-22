// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8STOCKSUI18ICONTEXTATTACHMENT_H
#define _TTC8STOCKSUI18ICONTEXTATTACHMENT_H

@class NSTextAttachment;



@interface _TtC8StocksUI18IconTextAttachment : NSTextAttachment {
    ? baselineAdjustment;
    ? imageHeightOverride;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSInteger)arg3 ;


@end


#endif