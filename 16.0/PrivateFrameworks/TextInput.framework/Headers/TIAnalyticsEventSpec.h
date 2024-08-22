// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIANALYTICSEVENTSPEC_H
#define TIANALYTICSEVENTSPEC_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TIAnalyticsEventSpec : NSObject

@property (readonly, nonatomic) NSArray *fieldSpecs; // ivar: _fieldSpecs
@property (readonly, nonatomic) NSDictionary *fieldSpecsByName; // ivar: _fieldSpecsByName
@property (readonly, nonatomic) BOOL isInputModeRequired; // ivar: _isInputModeRequired
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)eventSpecWithName:(id)arg0 inputModeRequired:(BOOL)arg1 ;
+(id)eventSpecWithName:(id)arg0 inputModeRequired:(BOOL)arg1 fieldSpecs:(id)arg2 ;
-(id)fieldSpecWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 inputModeRequired:(BOOL)arg1 fieldSpecs:(id)arg2 ;


@end


#endif