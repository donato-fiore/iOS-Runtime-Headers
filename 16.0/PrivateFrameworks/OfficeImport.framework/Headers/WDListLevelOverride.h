// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDLISTLEVELOVERRIDE_H
#define WDLISTLEVELOVERRIDE_H


#import <Foundation/Foundation.h>

#import "WDDocument.h"
#import "WDListLevel.h"

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    NSInteger mStartNumber;
    BOOL mStartNumberOverridden;
}




-(BOOL)isListLevelOverridden;
-(BOOL)isStartNumberOverridden;
-(NSInteger)startNumber;
-(id)description;
-(id)initWithDocument:(id)arg0 level:(unsigned char)arg1 ;
-(id)listLevel;
-(id)mutableListLevel;
-(unsigned char)level;
-(void)setStartNumber:(NSInteger)arg0 ;


@end


#endif