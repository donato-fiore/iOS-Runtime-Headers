// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKSEARCHFOUNDATIONRICHTEXT_H
#define MKSEARCHFOUNDATIONRICHTEXT_H

@class SFRichText;



@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id *completionHandlers; // ivar: _completionHandlers


-(BOOL)isRichTextResolved;
-(id)initRichTextTitleWithMapItem:(id)arg0 resultsType:(NSUInteger)arg1 ;
-(id)initWithString:(id)arg0 ;
-(void)_invokeCompletionHandlers;
-(void)loadRichTextWithCompletionHandler:(id)arg0 ;
-(void)setFormattedTextPieces:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif