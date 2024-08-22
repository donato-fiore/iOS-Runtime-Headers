// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCONTEXTUALMEMORIESPEOPLESETTING_H
#define PXCONTEXTUALMEMORIESPEOPLESETTING_H

@class NSString, NSArray;
@protocol PXContextualMemoriesSetting;

#import <Foundation/Foundation.h>


@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSArray *peopleNames; // ivar: _peopleNames
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(id)init;
-(void)requestPeopleNamesUpdateSinceDate:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)resetToDefault;


@end


#endif