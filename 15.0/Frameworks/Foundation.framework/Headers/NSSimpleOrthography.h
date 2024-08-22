// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSIMPLEORTHOGRAPHY_H
#define NSSIMPLEORTHOGRAPHY_H



#import "NSOrthography.h"

@interface NSSimpleOrthography : NSOrthography {
    unsigned int _orthographyFlags;
}




+(BOOL)supportsSecureCoding;
+(id)orthographyWithFlags:(unsigned int)arg0 ;
+(void)initialize;
-(Class)classForCoder;
-(id)allLanguages;
-(id)allScripts;
-(id)dominantLanguage;
-(id)dominantLanguageForScript:(id)arg0 ;
-(id)dominantScript;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDominantScript:(id)arg0 languageMap:(id)arg1 ;
-(id)initWithFlags:(unsigned int)arg0 ;
-(id)languageMap;
-(id)languagesForScript:(id)arg0 ;
-(unsigned int)orthographyFlags;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif