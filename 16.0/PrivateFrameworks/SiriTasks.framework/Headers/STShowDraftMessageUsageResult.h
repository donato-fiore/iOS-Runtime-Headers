// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWDRAFTMESSAGEUSAGERESULT_H
#define STSHOWDRAFTMESSAGEUSAGERESULT_H

@class AFSiriTaskUsageResult;



@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult

@property (nonatomic) NSInteger resultCode; // ivar: _resultCode


+(BOOL)supportsSecureCoding;
-(id)_resultDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif