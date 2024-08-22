// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRTYPOLOGYCANDIDATE_H
#define PRTYPOLOGYCANDIDATE_H

@class NSString, NSTextCheckingResult;

#import <Foundation/Foundation.h>


@interface PRTypologyCandidate : NSObject {
    NSString *_candidateString;
    _NSRange _selectedRange;
    NSTextCheckingResult *_result;
    CGFloat _openTime;
    CGFloat _closeTime;
    BOOL _isOpen;
}




+(id)openTypologyCandidate:(id)arg0 selectedRange:(struct _NSRange )arg1 inString:(id)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)closeTypologyCandidateWithResult:(id)arg0 ;
-(void)dealloc;


@end


#endif