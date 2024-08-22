// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSBASEACTION_H
#define MAPSSUGGESTIONSBASEACTION_H

@class NSString;
@protocol MapsSuggestionsAction;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsBaseAction : NSObject <MapsSuggestionsAction>

 {
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithName:(id)arg0 ;
-(void)actWithHandler:(id)arg0 ;


@end


#endif