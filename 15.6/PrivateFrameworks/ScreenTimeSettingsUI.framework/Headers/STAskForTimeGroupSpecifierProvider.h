// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STASKFORTIMEGROUPSPECIFIERPROVIDER_H
#define STASKFORTIMEGROUPSPECIFIERPROVIDER_H



#import "STRootGroupSpecifierProvider.h"

@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider



-(id)_createSpecifierForAskForMore:(id)arg0 ;
-(id)init;
-(id)requestSpecifiers;
-(void)confirmRespondToRequest:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)respondToRequest:(id)arg0 withApproval:(BOOL)arg1 timeApproved:(id)arg2 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif