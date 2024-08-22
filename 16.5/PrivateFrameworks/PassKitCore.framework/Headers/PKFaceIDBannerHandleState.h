// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFACEIDBANNERHANDLESTATE_H
#define PKFACEIDBANNERHANDLESTATE_H

@protocol NSSecureCoding;


#import "PKBannerHandleState.h"

@interface PKFaceIDBannerHandleState : PKBannerHandleState <NSSecureCoding>



@property (readonly, nonatomic) NSInteger glyphState; // ivar: _glyphState


+(BOOL)supportsSecureCoding;
+(id)createForGlyphState:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif