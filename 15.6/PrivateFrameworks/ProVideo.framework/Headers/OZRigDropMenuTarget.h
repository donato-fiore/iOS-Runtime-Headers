// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OZRIGDROPMENUTARGET_H
#define OZRIGDROPMENUTARGET_H


#import <Foundation/Foundation.h>


@interface OZRigDropMenuTarget : NSObject {
    *void _pRig;
}




+(id)rigDropMenuTargetForRig:(*void)arg0 ;
-(void)pasteHelper:(unsigned int)arg0 ;
-(void)pasteToNewList;
-(void)pasteToNewSlider;
-(void)pasteToNewSwitch;
-(void)setRig:(*void)arg0 ;


@end


#endif