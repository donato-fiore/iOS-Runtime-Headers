// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADFONTCOLLECTION_H
#define OADFONTCOLLECTION_H

@class NSMutableDictionary;


#import "OADBaseFontCollection.h"

@interface OADFontCollection : OADBaseFontCollection {
    NSMutableDictionary *_scriptToFontMap;
}




-(BOOL)isEmpty;
-(BOOL)isEqualToFontCollection:(id)arg0 ;
-(id)description;
-(id)fontForScript:(id)arg0 ;
-(id)init;
-(id)scripts;
-(void)setFont:(id)arg0 forScript:(id)arg1 ;


@end


#endif