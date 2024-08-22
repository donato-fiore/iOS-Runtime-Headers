// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSPEECHPRONUNCIATIONOPTIONS_H
#define AXSPEECHPRONUNCIATIONOPTIONS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSpeechPronunciationOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *orthography; // ivar: _orthography


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif