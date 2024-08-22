// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTTEXTLANGUAGEDETECTORSCORER_H
#define _LTTEXTLANGUAGEDETECTORSCORER_H

@class NSMutableArray, NSArray, NSLocale;

#import <Foundation/Foundation.h>


@interface _LTTextLanguageDetectorScorer : NSObject {
    NSMutableArray *_items;
    NSArray *_supportedLocales;
}


@property (readonly, nonatomic) BOOL hasWeightedLocale;
@property (readonly, copy, nonatomic) NSLocale *weightedLocale;


-(id)initWithSupportedLocales:(id)arg0 ;
-(void)append:(id)arg0 recognizer:(id)arg1 ;


@end


#endif