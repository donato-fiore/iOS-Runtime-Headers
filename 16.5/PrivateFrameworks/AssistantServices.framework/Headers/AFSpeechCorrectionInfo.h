// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSPEECHCORRECTIONINFO_H
#define AFSPEECHCORRECTIONINFO_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger alternativeSelectionCount; // ivar: _alternativeSelectionCount
@property (copy, nonatomic) NSDictionary *alternativesSelectedInfo; // ivar: _alternativesSelectedInfo
@property (nonatomic) NSInteger characterDeletionCount; // ivar: _characterDeletionCount
@property (nonatomic) NSInteger characterInsertionCount; // ivar: _characterInsertionCount
@property (nonatomic) NSInteger characterModificationCount; // ivar: _characterModificationCount
@property (nonatomic) NSInteger characterSubstitutionCount; // ivar: _characterSubstitutionCount
@property (copy, nonatomic) NSString *correctedText; // ivar: _correctedText
@property (copy, nonatomic) NSDictionary *recognizedTextInfo; // ivar: _recognizedTextInfo
@property (copy, nonatomic) NSArray *selectedAlternativesInfo; // ivar: _selectedAlternativesInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif