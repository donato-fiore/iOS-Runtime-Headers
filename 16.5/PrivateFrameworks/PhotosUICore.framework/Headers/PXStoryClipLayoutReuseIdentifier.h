// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCLIPLAYOUTREUSEIDENTIFIER_H
#define PXSTORYCLIPLAYOUTREUSEIDENTIFIER_H

@protocol NSCopying, PXStoryClip;

#import <Foundation/Foundation.h>


@interface PXStoryClipLayoutReuseIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<PXStoryClip> *clip; // ivar: _clip


-(BOOL)hasResourceEqualTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithClip:(id)arg0 ;


@end


#endif