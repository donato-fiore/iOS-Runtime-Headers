// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBDISPLAYLISTTRANSFORM_H
#define RBDISPLAYLISTTRANSFORM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBDisplayListTransform : NSObject <NSCopying>

 {
    DisplayListTransform _transform;
}




+(id)transform;
-(id)applyingToDisplayList:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addColorReplacementFrom:(struct ? )arg0 to:(struct ? )arg1 colorSpace:(int)arg2 ;
-(void)addColorReplacementTo:(struct ? )arg0 colorSpace:(int)arg1 ;
-(void)addEraserClip;
-(void)applyToDisplayList:(id)arg0 ;
-(void)removeAll;


@end


#endif