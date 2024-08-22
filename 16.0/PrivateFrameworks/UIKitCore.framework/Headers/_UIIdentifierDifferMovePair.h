// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIDENTIFIERDIFFERMOVEPAIR_H
#define _UIIDENTIFIERDIFFERMOVEPAIR_H

@class NSString;
@protocol _UIIdentifierDifferMovePair, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIIdentifierDifferMovePair : NSObject <_UIIdentifierDifferMovePair, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fromIndex; // ivar: _fromIndex
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger toIndex; // ivar: _toIndex


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFromIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;


@end


#endif