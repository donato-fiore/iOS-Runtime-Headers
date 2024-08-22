// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSBASECONDITION_H
#define MAPSSUGGESTIONSBASECONDITION_H

@class NSString;
@protocol MapsSuggestionsCondition;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsBaseCondition : NSObject <MapsSuggestionsCondition>

 {
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)initWithName:(id)arg0 ;
-(id)nameForJSON;
-(id)objectForJSON;


@end


#endif