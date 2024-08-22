// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDCOMPLICATIONSHARINGOPTION_H
#define NTKGREENFIELDCOMPLICATIONSHARINGOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NTKGreenfieldComplicationSharingOption : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger optionType; // ivar: _optionType
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)optionWithName:(id)arg0 uniqueIdentifier:(id)arg1 optionType:(NSUInteger)arg2 ;


@end


#endif