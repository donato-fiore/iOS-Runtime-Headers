// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHARINGCOPYACCESSTOKENOPERATION_H
#define BRCSHARINGCOPYACCESSTOKENOPERATION_H

@class BRCFrameworkOperation, NSString, CKRecordID;
@protocol BRCOperationSubclass;



@interface BRCSharingCopyAccessTokenOperation : BRCFrameworkOperation <BRCOperationSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKRecordID *shareID; // ivar: _shareID
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithItem:(id)arg0 ;
-(void)main;


@end


#endif