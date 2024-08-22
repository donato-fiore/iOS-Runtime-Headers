// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSPEECHUTTERANCE_H
#define AFSPEECHUTTERANCE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechUtterance : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger confidenceScore; // ivar: _confidenceScore
@property (copy, nonatomic) NSArray *interpretationIndices; // ivar: _interpretationIndices
@property (nonatomic) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterpretationIndices:(id)arg0 confidenceScore:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif