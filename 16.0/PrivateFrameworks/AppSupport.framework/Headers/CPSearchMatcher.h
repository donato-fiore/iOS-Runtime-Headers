// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSEARCHMATCHER_H
#define CPSEARCHMATCHER_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>


@interface CPSearchMatcher : NSObject {
    int _options;
    NSArray *_components;
    NSArray *_asciiComponents;
    NSData *_wholeSearchStringData;
    NSData *_context;
}




-(BOOL)matches:(id)arg0 ;
-(BOOL)matches:(id)arg0 matchType:(int)arg1 ;
-(BOOL)matchesASCIIString:(char *)arg0 matchType:(int)arg1 ;
-(BOOL)matchesUTF8String:(char *)arg0 ;
-(BOOL)matchesUTF8String:(char *)arg0 matchType:(int)arg1 ;
-(BOOL)matchesUTF8String:(char *)arg0 matchType:(int)arg1 matchOptions:(int)arg2 ;
-(id)initWithSearchString:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 andLocale:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 andLocale:(id)arg1 andOptions:(int)arg2 ;
-(id)initWithSearchString:(id)arg0 options:(int)arg1 ;
-(void)dealloc;


@end


#endif