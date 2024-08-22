// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPRESENTATIONOPERATION_H
#define FCPRESENTATIONOPERATION_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface FCPresentationOperation : NSObject

@property (nonatomic) BOOL endsPresentationSession; // ivar: _endsPresentationSession
@property (retain, nonatomic) NSNumber *maxPrecedingSameSessionPresentations; // ivar: _maxPrecedingSameSessionPresentations
@property (retain, nonatomic) NSNumber *maxPresentationAttempts; // ivar: _maxPresentationAttempts
@property (nonatomic) NSInteger requiredAppLaunchCount; // ivar: _requiredAppLaunchCount
@property (copy, nonatomic) NSString *uid; // ivar: _uid


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif