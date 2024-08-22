// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUSERUTTERANCESELECTIONRESULTS_H
#define AFUSERUTTERANCESELECTIONRESULTS_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFUserUtteranceSelectionResults : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSNumber *combinedRank; // ivar: _combinedRank
@property (copy, nonatomic) NSNumber *combinedScore; // ivar: _combinedScore
@property (copy, nonatomic) NSString *interactionId; // ivar: _interactionId
@property (copy, nonatomic) NSNumber *onDeviceUtterancesPresent; // ivar: _onDeviceUtterancesPresent
@property (copy, nonatomic) NSNumber *originalRank; // ivar: _originalRank
@property (copy, nonatomic) NSNumber *originalScore; // ivar: _originalScore
@property (copy, nonatomic) NSString *previousUtterance; // ivar: _previousUtterance
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (copy, nonatomic) NSString *utteranceSource; // ivar: _utteranceSource


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif