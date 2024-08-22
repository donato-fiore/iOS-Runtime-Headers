// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMLISTLEVELTEXTMAPPER_H
#define WMLISTLEVELTEXTMAPPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WMListLevelTextMapper : NSObject {
    NSMutableArray *_tokens;
}




-(NSUInteger)tokenCount;
-(id)initWithText:(id)arg0 ;
-(id)initWithText:(id)arg0 levelDescriptions:(id)arg1 language:(int)arg2 ;
-(id)listLevelTextForOutline:(id)arg0 ;
-(id)token:(unsigned int)arg0 ;


@end


#endif