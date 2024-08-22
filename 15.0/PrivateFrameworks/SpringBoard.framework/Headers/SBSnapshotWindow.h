// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSNAPSHOTWINDOW_H
#define SBSNAPSHOTWINDOW_H

@class UIWindow;



@interface SBSnapshotWindow : UIWindow {
    NSInteger _orientation;
}




+(BOOL)_isSecure;
-(NSInteger)interfaceOrientation;
-(id)initWithFrame:(struct CGRect )arg0 orientation:(NSInteger)arg1 ;


@end


#endif