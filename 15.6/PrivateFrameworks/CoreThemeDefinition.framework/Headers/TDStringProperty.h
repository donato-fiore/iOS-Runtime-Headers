// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDSTRINGPROPERTY_H
#define TDSTRINGPROPERTY_H

@class NSString;


#import "TDProperty.h"

@interface TDStringProperty : TDProperty {
    NSString *_stringValue;
}


@property (copy, nonatomic) NSString *stringValue;


-(void)addToDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif