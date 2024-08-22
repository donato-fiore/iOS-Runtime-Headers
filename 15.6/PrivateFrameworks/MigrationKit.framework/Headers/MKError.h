// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKERROR_H
#define MKERROR_H

@class NSError, NSString;



@interface MKError : NSError

@property (copy, nonatomic) NSString *message; // ivar: _message


-(id)initWithDomain:(id)arg0 code:(NSInteger)arg1 message:(id)arg2 ;


@end


#endif