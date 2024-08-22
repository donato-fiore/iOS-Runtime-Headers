// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONSECTION_H
#define UIINTERFACEACTIONSECTION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIInterfaceActionSection : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSString *sectionID; // ivar: _sectionID


+(id)actionsFromSections:(id)arg0 ;
-(id)copyOfActions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActions:(id)arg0 ;


@end


#endif