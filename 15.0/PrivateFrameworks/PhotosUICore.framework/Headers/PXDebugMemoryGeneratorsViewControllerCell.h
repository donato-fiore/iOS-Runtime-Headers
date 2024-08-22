// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEBUGMEMORYGENERATORSVIEWCONTROLLERCELL_H
#define PXDEBUGMEMORYGENERATORSVIEWCONTROLLERCELL_H

@class UITableViewCell, PHMemory;



@interface PXDebugMemoryGeneratorsViewControllerCell : UITableViewCell

@property (retain) PHMemory *memory; // ivar: _memory


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)persist:(id)arg0 ;


@end


#endif