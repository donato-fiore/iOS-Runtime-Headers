// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFLISTFORMATTER_H
#define HFLISTFORMATTER_H

@class NSFormatter, NSLocale;



@interface HFListFormatter : NSFormatter

@property (nonatomic) *UListFormatter formatter; // ivar: _formatter
@property (nonatomic) NSUInteger listStyle; // ivar: _listStyle
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale


-(id)_formatAndListWithElements:(id)arg0 ;
-(id)_formatOrListWithElements:(id)arg0 ;
-(id)_formatSentenceListWithElements:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(void)_invaildateFormatter;
-(void)dealloc;


@end


#endif