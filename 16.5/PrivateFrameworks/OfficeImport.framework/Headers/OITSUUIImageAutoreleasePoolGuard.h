// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUUIIMAGEAUTORELEASEPOOLGUARD_H
#define OITSUUIIMAGEAUTORELEASEPOOLGUARD_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface OITSUUIImageAutoreleasePoolGuard : NSObject {
    UIImage *mImage;
}




-(id)initWithUIImage:(id)arg0 ;
-(void)dealloc;


@end


#endif