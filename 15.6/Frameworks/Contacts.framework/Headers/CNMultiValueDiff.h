// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMULTIVALUEDIFF_H
#define CNMULTIVALUEDIFF_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNMultiValueDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *updates; // ivar: _updates


+(id)diffMultiValue:(id)arg0 toMultiValue:(id)arg1 ;
+(id)emptyDiff;
-(BOOL)applyToABPerson:(*void)arg0 propertyDescription:(id)arg1 logger:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEmpty;
-(id)description;
-(id)initWithUpdates:(id)arg0 ;
-(id)multiValueByApplyToMultiValue:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif