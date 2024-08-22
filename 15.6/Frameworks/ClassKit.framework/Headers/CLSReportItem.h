// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSREPORTITEM_H
#define CLSREPORTITEM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLSReportItem : NSObject <NSCopying>





+(id)mean:(id)arg0 ;
+(id)median:(id)arg0 ;
+(id)midrange:(id)arg0 ;
+(id)multiply:(id)arg0 withScalar:(CGFloat)arg1 ;
+(id)sum:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)convertToItemCompatibleWithItem:(id)arg0 ;
-(id)convertToItemCompatibleWithItem:(id)arg0 copyIfSameType:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)scalarProduct:(CGFloat)arg0 ;
-(id)sum:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)scalarMultiply:(CGFloat)arg0 ;


@end


#endif