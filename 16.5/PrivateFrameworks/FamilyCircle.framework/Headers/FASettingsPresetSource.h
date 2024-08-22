// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASETTINGSPRESETSOURCE_H
#define FASETTINGSPRESETSOURCE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FASettingsPresetConfiguration.h"

@interface FASettingsPresetSource : NSObject <NSSecureCoding>



@property (readonly, nonatomic) FASettingsPresetConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif