// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVSHADOWVIEWELEMENTID_H
#define _TVSHADOWVIEWELEMENTID_H

@class NSString, IKViewElement;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TVShadowViewElementID : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (readonly, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif