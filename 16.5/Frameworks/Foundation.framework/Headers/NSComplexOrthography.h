// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOMPLEXORTHOGRAPHY_H
#define NSCOMPLEXORTHOGRAPHY_H

@class NSDictionary;


#import "NSOrthography.h"
#import "NSString.h"

@interface NSComplexOrthography : NSOrthography {
    NSString *_dominantScript;
    NSDictionary *_languageMap;
    unsigned int _orthographyFlags;
}




+(void)initialize;
-(id)dominantScript;
-(id)initWithDominantScript:(id)arg0 languageMap:(id)arg1 ;
-(id)languageMap;
-(unsigned int)orthographyFlags;
-(void)dealloc;


@end


#endif