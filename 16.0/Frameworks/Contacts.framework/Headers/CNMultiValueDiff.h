// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMULTIVALUEDIFF_H
#define CNMULTIVALUEDIFF_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNMultiValueDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *updates; // ivar: _updates


+(id)diffMultiValue:(id)arg0 toMultiValue:(id)arg1 ;
+(id)emptyDiff;
-(BOOL)applyToABPerson:(*void)arg0 propertyDescription:(id)arg1 isUnified:(BOOL)arg2 logger:(id)arg3 error:(*id)arg4 ;
-(BOOL)isEmpty;
-(id)description;
-(id)initWithUpdates:(id)arg0 ;
-(id)multiValueByApplyToMultiValue:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif