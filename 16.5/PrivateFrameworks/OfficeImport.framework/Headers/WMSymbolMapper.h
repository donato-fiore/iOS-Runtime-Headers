// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMSYMBOLMAPPER_H
#define WMSYMBOLMAPPER_H

@class NSString;


#import "CMMapper.h"

@interface WMSymbolMapper : CMMapper {
    unsigned short mCharacter;
    NSString *mFontName;
}




+(BOOL)isSymbolFontName:(id)arg0 ;
+(unsigned short)mapCharacter:(unsigned short)arg0 withFontName:(id)arg1 ;
+(unsigned short)mapWindingsCharacter:(unsigned short)arg0 ;
+(unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg0 ;
-(id)initWithWDSymbol:(id)arg0 parent:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif