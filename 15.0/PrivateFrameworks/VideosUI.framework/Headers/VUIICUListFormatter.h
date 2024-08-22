// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIICULISTFORMATTER_H
#define VUIICULISTFORMATTER_H

@class NSListFormatter, NSString;



@interface VUIICUListFormatter : NSListFormatter

@property (copy, nonatomic) NSString *style; // ivar: _style


+(id)localizedStringByJoiningStrings:(id)arg0 ;
+(id)localizedStringByJoiningStrings:(id)arg0 style:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 style:(id)arg1 ;


@end


#endif