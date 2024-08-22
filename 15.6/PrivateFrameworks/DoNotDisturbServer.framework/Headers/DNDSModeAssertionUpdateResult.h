// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODEASSERTIONUPDATERESULT_H
#define DNDSMODEASSERTIONUPDATERESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *assertions; // ivar: _assertions
@property (readonly, copy, nonatomic) NSArray *invalidations; // ivar: _invalidations


+(id)emptyResult;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssertions:(id)arg0 invalidations:(id)arg1 ;
-(id)resultCombiningWithResult:(id)arg0 ;


@end


#endif