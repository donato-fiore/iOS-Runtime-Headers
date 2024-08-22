// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSANNOTATIONS_H
#define PKPASSANNOTATIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPassAnnotations : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger sortingState; // ivar: _sortingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSortingState:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif