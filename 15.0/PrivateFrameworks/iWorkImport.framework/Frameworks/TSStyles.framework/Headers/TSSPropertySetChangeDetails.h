// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSSPROPERTYSETCHANGEDETAILS_H
#define TSSPROPERTYSETCHANGEDETAILS_H


#import <Foundation/Foundation.h>

#import "TSSMutablePropertySet.h"
#import "TSSPropertySet.h"

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}


@property (readonly, nonatomic) TSSPropertySet *changedProperties;


-(id)init;
-(id)initWithChangedProperties:(id)arg0 ;
-(void)addChangedProperties:(id)arg0 ;
-(void)addChangedProperty:(int)arg0 ;


@end


#endif