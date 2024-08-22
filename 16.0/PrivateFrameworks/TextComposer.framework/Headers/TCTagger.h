// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCTAGGER_H
#define TCTAGGER_H

@class NLTagger, NSString;



@interface TCTagger : NLTagger {
    NSString *_language;
}


@property (readonly, copy) NSString *language;
@property NSUInteger maximumTokenCount; // ivar: _maximumTokenCount


-(id)descriptionForFlags:(NSUInteger)arg0 ;
-(id)init;
-(id)sentenceTerminatorCharacterSet;
-(void)enumerateSentencesInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)setString:(id)arg0 language:(id)arg1 ;


@end


#endif