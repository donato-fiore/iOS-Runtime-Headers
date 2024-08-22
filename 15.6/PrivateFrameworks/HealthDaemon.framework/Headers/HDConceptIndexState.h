// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONCEPTINDEXSTATE_H
#define HDCONCEPTINDEXSTATE_H

@class HKQueryAnchor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDConceptIndexState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKQueryAnchor *anchor; // ivar: _anchor
@property (readonly, nonatomic) NSInteger generation; // ivar: _generation


+(BOOL)supportsSecureCoding;
+(id)stateWithGeneration:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithAnchor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeneration:(NSInteger)arg0 anchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif