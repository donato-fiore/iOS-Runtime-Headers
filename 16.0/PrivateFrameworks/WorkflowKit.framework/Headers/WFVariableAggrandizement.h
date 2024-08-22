// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFVARIABLEAGGRANDIZEMENT_H
#define WFVARIABLEAGGRANDIZEMENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WFVariableAggrandizement : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 ;
-(id)processedContentClasses:(id)arg0 ;
-(void)applyToContentCollection:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif