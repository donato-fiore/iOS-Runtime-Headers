// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTAXISID_H
#define TSCHCHARTAXISID_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHChartAxisID : NSObject <NSCopying>



@property (readonly) NSUInteger ordinal; // ivar: _ordinal
@property (readonly) int type; // ivar: _type


+(id)axisIDWithType:(int)arg0 ordinal:(NSUInteger)arg1 ;
-(BOOL)intersectsAxisID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debuggingName;
-(id)description;
-(id)displayNameWithOrdinal:(BOOL)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithType:(int)arg0 ordinal:(NSUInteger)arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif