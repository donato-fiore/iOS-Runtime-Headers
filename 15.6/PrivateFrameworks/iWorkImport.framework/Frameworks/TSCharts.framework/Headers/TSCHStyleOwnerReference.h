// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSTYLEOWNERREFERENCE_H
#define TSCHSTYLEOWNERREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHStyleOwnerReference : NSObject <NSCopying>

 {
    int _type;
    NSUInteger _index;
}


@property (readonly, nonatomic) Class genericPropertyMapClass;
@property (readonly, nonatomic) NSUInteger index;
@property (readonly, nonatomic) Class nonstyleClass;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) int type;


+(id)styleOwnerReferenceWithType:(int)arg0 index:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStyleOwnerType:(int)arg0 index:(NSUInteger)arg1 ;


@end


#endif