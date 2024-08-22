// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTALERTCONTROLLER_H
#define MTALERTCONTROLLER_H

@class UIAlertController;



@interface MTAlertController : UIAlertController

@property (nonatomic) BOOL replacesExistingAlert; // ivar: _replacesExistingAlert


-(id)alertIdentifier;
-(id)init;
-(void)presentAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif