// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHARINGSAVESHAREOPERATION_H
#define BRCSHARINGSAVESHAREOPERATION_H



#import "BRCSharingModifyShareOperation.h"

@interface BRCSharingSaveShareOperation : BRCSharingModifyShareOperation



-(id)createActivity;
-(id)initWithShare:(id)arg0 zone:(id)arg1 ;
-(void)main;
-(void)performAfterUnsharingParentShareTurdIfNecessary:(id)arg0 ;


@end


#endif