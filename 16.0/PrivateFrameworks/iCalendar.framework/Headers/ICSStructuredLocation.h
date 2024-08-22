// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSSTRUCTUREDLOCATION_H
#define ICSSTRUCTUREDLOCATION_H

@class NSString, NSData;


#import "ICSProperty.h"

@interface ICSStructuredLocation : ICSProperty

@property (retain, nonatomic) NSString *abURLString;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *fmtype;
@property (retain, nonatomic) NSString *loctype;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) CGFloat radius;
@property (retain, nonatomic) NSString *routing;
@property (retain, nonatomic) NSString *title;


-(BOOL)shouldObscureValue;
-(id)parametersToObscure;
-(id)propertiesToHide;
-(id)propertiesToObscure;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif