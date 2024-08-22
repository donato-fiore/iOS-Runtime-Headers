// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMFIERROR_H
#define AMFIERROR_H

@class NSError;



@interface AMFIError : NSError



-(id)initWithAMFIErrorCode:(NSInteger)arg0 withURL:(id)arg1 ;
-(id)initWithMISError:(int)arg0 withURL:(id)arg1 ;


@end


#endif