// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSERROR_H
#define SIRIANALYTICSERROR_H

@class NSError, NSString;



@interface SiriAnalyticsError : NSError

@property (readonly, nonatomic) NSUInteger errorType; // ivar: _errorType
@property (readonly, nonatomic) NSString *message; // ivar: _message


-(id)init;
-(id)initWithErrorType:(NSUInteger)arg0 message:(id)arg1 ;


@end


#endif