// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMUTIMEFORMATTER_H
#define SMUTIMEFORMATTER_H

@class NSFormatter, AVTimeFormatter;



@interface SMUTimeFormatter : NSFormatter {
    AVTimeFormatter *_formatter;
}


@property (nonatomic) CGFloat formatTemplate;
@property (nonatomic, getter=isFullWidth) BOOL fullWidth;
@property (nonatomic) NSInteger style;


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)editingStringForObjectValue:(id)arg0 ;
-(id)init;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromCMTime:(struct ? )arg0 ;
-(id)stringFromSeconds:(CGFloat)arg0 ;


@end


#endif