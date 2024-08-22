// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHARINGLOOKUPPARTICIPANTSOPERATION_H
#define BRCSHARINGLOOKUPPARTICIPANTSOPERATION_H

@class BRCFrameworkOperation, NSArray, NSMutableArray, NSString;
@protocol BRCOperationSubclass;



@interface BRCSharingLookupParticipantsOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    NSArray *_userIdentities;
    NSMutableArray *_shareParticipants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithUserIdentities:(id)arg0 session:(id)arg1 ;
-(void)main;


@end


#endif