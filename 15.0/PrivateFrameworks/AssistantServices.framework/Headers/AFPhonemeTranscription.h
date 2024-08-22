// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFPHONEMETRANSCRIPTION_H
#define AFPHONEMETRANSCRIPTION_H

@class NSString, NSArray;
@protocol AFTranscriptionType;

#import <Foundation/Foundation.h>


@interface AFPhonemeTranscription : NSObject <AFTranscriptionType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *orthography; // ivar: _orthography
@property (retain, nonatomic) NSArray *phonemeSuggestions; // ivar: _phonemeSuggestions
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif