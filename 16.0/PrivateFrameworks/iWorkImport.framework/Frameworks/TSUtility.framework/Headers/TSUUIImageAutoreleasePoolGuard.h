// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUUIIMAGEAUTORELEASEPOOLGUARD_H
#define TSUUIIMAGEAUTORELEASEPOOLGUARD_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface TSUUIImageAutoreleasePoolGuard : NSObject {
    UIImage *mImage;
}




-(id)initWithUIImage:(id)arg0 ;
-(void)dealloc;


@end


#endif