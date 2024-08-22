// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTACTGROUP_H
#define WFCONTACTGROUP_H

@class NSArray, NSString;
@protocol WFNaming;

#import <Foundation/Foundation.h>


@interface WFContactGroup : NSObject <WFNaming>



@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *wfName;


+(Class)preferredConcreteSubclass;
+(id)allContactGroups;
+(id)contactGroupWithName:(id)arg0 ;
-(BOOL)containsContact:(id)arg0 ;


@end


#endif