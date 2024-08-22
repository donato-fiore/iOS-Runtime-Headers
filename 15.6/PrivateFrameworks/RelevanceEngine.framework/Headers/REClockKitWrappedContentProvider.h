// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RECLOCKKITWRAPPEDCONTENTPROVIDER_H
#define RECLOCKKITWRAPPEDCONTENTPROVIDER_H

@class CLKTextProvider;


#import "RETextContentProvider.h"

@interface REClockKitWrappedContentProvider : RETextContentProvider

@property (readonly, nonatomic) CLKTextProvider *clockKitTextProvider; // ivar: _clockKitTextProvider


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClockKitTextProvider:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif