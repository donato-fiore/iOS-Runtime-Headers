// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBCLOUDZONERECORDPUSHRESULT_H
#define HMBCLOUDZONERECORDPUSHRESULT_H

@class HMFObject, NSDictionary, NSSet, NSError;



@interface HMBCloudZoneRecordPushResult : HMFObject

@property (readonly, nonatomic) NSDictionary *conflicts; // ivar: _conflicts
@property (readonly, nonatomic) NSSet *deleted; // ivar: _deleted
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL fatalError; // ivar: _fatalError
@property (readonly, nonatomic) NSDictionary *partialErrors; // ivar: _partialErrors
@property (readonly, nonatomic) NSSet *updated; // ivar: _updated


+(id)pushResultByMergingPushResult:(id)arg0 withPushResult:(id)arg1 ;
-(id)initWithUpdated:(id)arg0 deleted:(id)arg1 conflicts:(id)arg2 error:(id)arg3 ;
-(id)initWithUpdated:(id)arg0 deleted:(id)arg1 conflicts:(id)arg2 partialErrors:(id)arg3 fatalError:(BOOL)arg4 error:(id)arg5 ;


@end


#endif