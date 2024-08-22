// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTTEXTLANGUAGEDETECTOR_H
#define _LTTEXTLANGUAGEDETECTOR_H

@class NLLanguageRecognizer, NSArray;

#import <Foundation/Foundation.h>


@interface _LTTextLanguageDetector : NSObject {
    NLLanguageRecognizer *_recognizer;
}


@property (copy, nonatomic) NSArray *availableLocales; // ivar: _availableLocales


-(id)detectionForString:(id)arg0 ;
-(id)detectionForStrings:(id)arg0 ;
-(id)detectionForStrings:(id)arg0 strategy:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithModel:(NSUInteger)arg0 ;


@end


#endif