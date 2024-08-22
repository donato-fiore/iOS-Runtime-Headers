// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDLEGENDENTRY_H
#define CHDLEGENDENTRY_H


#import <Foundation/Foundation.h>

#import "EDResources.h"

@interface CHDLegendEntry : NSObject {
    NSUInteger mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}




-(NSUInteger)fontIndex;
-(id)description;
-(id)font;
-(id)initWithResources:(id)arg0 ;
-(unsigned int)entryIndex;
-(void)setEntryIndex:(unsigned int)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFontIndex:(NSUInteger)arg0 ;


@end


#endif