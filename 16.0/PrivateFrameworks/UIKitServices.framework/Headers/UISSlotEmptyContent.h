// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISSLOTEMPTYCONTENT_H
#define UISSLOTEMPTYCONTENT_H


#import <Foundation/Foundation.h>


@interface UISSlotEmptyContent : NSObject {
    CGSize _contentSize;
}




+(id)contentWithSize:(struct CGSize )arg0 ;
-(BOOL)isRemote;
-(BOOL)shouldReplaceExistingContent;
-(id)image;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )contentSize;
-(unsigned char)contentScale;
-(void)deleteFromLayerContext:(id)arg0 ;


@end


#endif