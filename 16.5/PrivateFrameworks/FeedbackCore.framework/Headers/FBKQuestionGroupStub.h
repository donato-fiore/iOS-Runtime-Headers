// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKQUESTIONGROUPSTUB_H
#define FBKQUESTIONGROUPSTUB_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FBKQuestionGroupStub : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *questionAnswerPairs; // ivar: _questionAnswerPairs
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setPropertiesFromJSONObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithTitle:(id)arg0 questions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif