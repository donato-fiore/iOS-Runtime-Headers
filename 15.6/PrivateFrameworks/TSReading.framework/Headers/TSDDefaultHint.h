// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDDEFAULTHINT_H
#define TSDDEFAULTHINT_H

@class NSString;
@protocol TSDHint, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TSDDefaultHint : NSObject <TSDHint, NSSecureCoding>



@property (readonly, nonatomic) CGRect bounds; // ivar: mBounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger edges; // ivar: mEdges
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)archivedHintClass;
-(BOOL)isLastPartitionHorizontally:(BOOL)arg0 ;
-(BOOL)overlapsWithSelection:(id)arg0 ;
-(id)copyForArchiving;
-(id)firstChildHint;
-(id)initWithBounds:(struct CGRect )arg0 edges:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)lastChildHint;
-(void)encodeWithCoder:(id)arg0 ;
-(void)offsetByDelta:(int)arg0 ;


@end


#endif