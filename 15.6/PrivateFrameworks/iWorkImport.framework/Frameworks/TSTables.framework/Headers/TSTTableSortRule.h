// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLESORTRULE_H
#define TSTTABLESORTRULE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTTableSortRule : NSObject <NSCopying>



@property (readonly, nonatomic) TSUModelColumnOrRowIndex baseIndex; // ivar: _baseIndex
@property (readonly, nonatomic) int direction; // ivar: _direction


+(id)ruleWithBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 direction:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithBaseIndex:(struct TSUModelColumnOrRowIndex )arg0 direction:(int)arg1 ;
-(id)ruleByChangingBaseIndexTo:(struct TSUModelColumnOrRowIndex )arg0 ;
-(id)ruleByChangingDirectionTo:(int)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif