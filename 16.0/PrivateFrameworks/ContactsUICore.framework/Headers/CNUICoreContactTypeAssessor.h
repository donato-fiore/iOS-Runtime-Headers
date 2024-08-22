// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICORECONTACTTYPEASSESSOR_H
#define CNUICORECONTACTTYPEASSESSOR_H

@class CNFuture;

#import <Foundation/Foundation.h>


@interface CNUICoreContactTypeAssessor : NSObject

@property (readonly, nonatomic) CNFuture *familyInfoFuture; // ivar: _familyInfoFuture


+(id)keysToFetch;
-(NSInteger)estiamtedTypeOfContact:(id)arg0 ;
-(id)init;
-(id)initWithFamilyInfo:(id)arg0 ;
-(id)initWithFamilyInfoFuture:(id)arg0 ;


@end


#endif