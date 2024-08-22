// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBERROR_H
#define TBERROR_H

@class NSError;



@interface TBError : NSError



+(id)fetchMissingParametersErrorWithUserInfo:(id)arg0 ;
+(id)fetchUnsupportedErrorWithUserInfo:(id)arg0 ;
+(id)responseErrorWithUserInfo:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 userInfo:(id)arg1 ;


@end


#endif