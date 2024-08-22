// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMSYSTEMVERSIONNUMBER_H
#define FMSYSTEMVERSIONNUMBER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FMSystemVersionNumber : NSObject

@property (copy, nonatomic) NSString *baseLetter; // ivar: _baseLetter
@property (nonatomic) NSInteger baseNumber; // ivar: _baseNumber
@property (nonatomic) NSInteger buildNumber; // ivar: _buildNumber
@property (copy, nonatomic) NSString *suffix; // ivar: _suffix


-(NSInteger)compare:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithString:(id)arg0 ;


@end


#endif