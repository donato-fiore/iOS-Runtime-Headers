// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYPLACEHOLDERITEMPROXY_H
#define _UIACTIVITYPLACEHOLDERITEMPROXY_H

@class NSProxy;
@protocol NSCopying;



@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying>

 {
    id *_uikit_placeholderItem;
}


@property (readonly, nonatomic) id *placeholderItem;


+(id)unproxiedItemForItem:(id)arg0 ;
+(id)unproxiedItemsForItems:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isProxy;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)class;
-(Class)superclass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPlaceholderItem:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif