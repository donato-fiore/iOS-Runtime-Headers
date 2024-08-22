// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMUSERVOCAB_H
#define CDMUSERVOCAB_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CDMUserVocab : NSObject {
    unsigned int _userVocabOptions;
}


@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)_labelOptionMap;
+(id)_optionLabelMap;
+(id)labelSet;
-(id)initWithText:(id)arg0 label:(id)arg1 ;
-(id)initWithText:(id)arg0 optionsFlag:(unsigned int)arg1 ;
-(unsigned int)userVocabOptions;
-(void)addLabel:(id)arg0 ;


@end


#endif