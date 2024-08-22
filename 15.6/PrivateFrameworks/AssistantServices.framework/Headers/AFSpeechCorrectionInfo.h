// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSPEECHCORRECTIONINFO_H
#define AFSPEECHCORRECTIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger alternativeSelectionCount; // ivar: _alternativeSelectionCount
@property (nonatomic) NSInteger characterDeletionCount; // ivar: _characterDeletionCount
@property (nonatomic) NSInteger characterInsertionCount; // ivar: _characterInsertionCount
@property (nonatomic) NSInteger characterModificationCount; // ivar: _characterModificationCount
@property (nonatomic) NSInteger characterSubstitutionCount; // ivar: _characterSubstitutionCount
@property (copy, nonatomic) NSString *correctedText; // ivar: _correctedText


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif