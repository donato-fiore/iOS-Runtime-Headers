// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAIDENTITYCHARACTERISTIC_H
#define NAIDENTITYCHARACTERISTIC_H

@class NSString;
@protocol NAHashable, NAEquatable, NSCopying;

#import <Foundation/Foundation.h>


@interface NAIdentityCharacteristic : NSObject <NAHashable, NAEquatable, NSCopying>



@property (copy, nonatomic) id *comparisonBlock; // ivar: _comparisonBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *hashBlock; // ivar: _hashBlock
@property (copy, nonatomic) id *retrievalBlock; // ivar: _retrievalBlock
@property (nonatomic) NSInteger role; // ivar: _role
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif