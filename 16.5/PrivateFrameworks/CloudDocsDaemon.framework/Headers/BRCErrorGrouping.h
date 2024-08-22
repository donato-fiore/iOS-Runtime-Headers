// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCERRORGROUPING_H
#define BRCERRORGROUPING_H

@class NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BRCErrorGrouping : NSObject <NSCopying>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isPCSChained; // ivar: _isPCSChained


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToErrorGrouping:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithError:(id)arg0 pcsChained:(BOOL)arg1 ;


@end


#endif