// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAXISLABEL_H
#define HKAXISLABEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKAxisLabel : NSObject

@property (nonatomic) NSInteger labelType; // ivar: _labelType
@property (retain, nonatomic) id *location; // ivar: _location
@property (retain, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif