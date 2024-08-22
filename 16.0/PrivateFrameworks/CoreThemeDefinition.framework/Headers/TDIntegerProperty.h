// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDINTEGERPROPERTY_H
#define TDINTEGERPROPERTY_H



#import "TDProperty.h"

@interface TDIntegerProperty : TDProperty {
    NSInteger _integerValue;
}


@property (nonatomic) NSInteger integerValue;


-(void)addToDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif