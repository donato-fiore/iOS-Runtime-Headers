// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXRECIPIENTTRANSPORT_H
#define PXRECIPIENTTRANSPORT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXRecipientTransport : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSInteger addressKind; // ivar: _addressKind


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAddress:(id)arg0 addressKind:(NSInteger)arg1 ;


@end


#endif