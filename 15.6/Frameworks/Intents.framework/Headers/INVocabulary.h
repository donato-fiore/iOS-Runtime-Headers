// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INVOCABULARY_H
#define INVOCABULARY_H


#import <Foundation/Foundation.h>


@interface INVocabulary : NSObject



+(id)sharedVocabulary;
-(id)init;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
-(void)removeAllVocabularyStrings;
-(void)setVocabulary:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)setVocabularyStrings:(id)arg0 ofType:(NSInteger)arg1 ;


@end


#endif