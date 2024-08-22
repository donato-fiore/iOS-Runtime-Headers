// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVRAWSPEECHPROFILEWORD_H
#define CKVRAWSPEECHPROFILEWORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileWord : NSObject

@property (readonly, nonatomic) NSString *orthography; // ivar: _orthography
@property (readonly, nonatomic) NSInteger tagType; // ivar: _tagType
@property (readonly, nonatomic) NSString *tagValue; // ivar: _tagValue


-(id)_extractOrthographyFromSpeechWord:(id)arg0 ;
-(id)_extractTagFromSpeechWord:(id)arg0 ;
-(id)init;
-(id)initWithSpeechWordDictionary:(id)arg0 ;


@end


#endif