// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBCLOUDZONECONFLICT_H
#define HMBCLOUDZONECONFLICT_H

@class HMFObject, CKRecord;



@interface HMBCloudZoneConflict : HMFObject

@property (readonly, nonatomic) CKRecord *ancestor; // ivar: _ancestor
@property (readonly, nonatomic) CKRecord *client; // ivar: _client
@property (readonly, nonatomic) CKRecord *server; // ivar: _server


-(id)initWithClientRecord:(id)arg0 serverRecord:(id)arg1 ancestorRecord:(id)arg2 ;
-(id)initWithError:(id)arg0 ;


@end


#endif