// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDEFAULTHOMESCREENITEMTILERHELPER_H
#define ATXDEFAULTHOMESCREENITEMTILERHELPER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemTilerHelper : NSObject {
    NSMutableSet *_usedBundleIds;
    NSMutableSet *_usedSpecialKinds;
}




-(BOOL)_isSpecialAvocadoDescriptorKind:(id)arg0 ;
-(BOOL)_isWidgetAlreadyUsed:(id)arg0 ;
-(id)filterForNextUnusedWidgetDescriptor:(id)arg0 ;
-(id)init;
-(void)_markWidgetAsUsed:(id)arg0 ;
-(void)unmarkWidgetAsUsed:(id)arg0 ;


@end


#endif