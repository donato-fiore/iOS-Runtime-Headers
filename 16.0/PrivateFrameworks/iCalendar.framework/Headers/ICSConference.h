// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSCONFERENCE_H
#define ICSCONFERENCE_H

@class NSString;


#import "ICSProperty.h"

@interface ICSConference : ICSProperty

@property (retain, nonatomic) NSString *feature;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *region;


-(BOOL)isEqualToConference:(id)arg0 ;
-(NSUInteger)currentHash;
-(id)initWithValue:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif