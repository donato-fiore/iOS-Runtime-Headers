// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSBASEIMPROVER_H
#define MAPSSUGGESTIONSBASEIMPROVER_H

@class NSString;
@protocol MapsSuggestionsImprover;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsBaseImprover : NSObject <MapsSuggestionsImprover>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)improveEntry:(id)arg0 ;


@end


#endif