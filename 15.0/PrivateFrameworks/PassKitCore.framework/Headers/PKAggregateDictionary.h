// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAGGREGATEDICTIONARY_H
#define PKAGGREGATEDICTIONARY_H

@class NSString;
@protocol PKAggregateDictionaryProtocol;

#import <Foundation/Foundation.h>


@interface PKAggregateDictionary : NSObject <PKAggregateDictionaryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDictionary;
-(void)addValueForScalarKey:(id)arg0 value:(NSInteger)arg1 ;


@end


#endif