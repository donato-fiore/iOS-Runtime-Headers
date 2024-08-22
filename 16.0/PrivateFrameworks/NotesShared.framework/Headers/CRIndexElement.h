// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRINDEXELEMENT_H
#define CRINDEXELEMENT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRIndexElement : NSObject <NSCopying>



@property (nonatomic) NSInteger integer; // ivar: _integer
@property (retain, nonatomic) NSUUID *replica; // ivar: _replica


+(id)elementWithInteger:(NSInteger)arg0 replica:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInteger:(NSInteger)arg0 replica:(id)arg1 ;


@end


#endif