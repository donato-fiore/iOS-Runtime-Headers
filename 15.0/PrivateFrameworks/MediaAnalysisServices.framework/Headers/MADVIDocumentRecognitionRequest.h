// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADVIDOCUMENTRECOGNITIONREQUEST_H
#define MADVIDOCUMENTRECOGNITIONREQUEST_H

@class NSArray;


#import "MADRequest.h"

@interface MADVIDocumentRecognitionRequest : MADRequest

@property (copy, nonatomic) NSArray *languages; // ivar: _languages
@property (nonatomic) NSUInteger maximumCandidateCount; // ivar: _maximumCandidateCount
@property (nonatomic) BOOL usesLanguageDetection; // ivar: _usesLanguageDetection


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguages:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif