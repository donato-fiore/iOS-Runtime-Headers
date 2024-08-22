// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERMODELREMOVALREQUEST_H
#define SBSWITCHERMODELREMOVALREQUEST_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SBSwitcherModelRemovalRequest : NSObject {
    NSMutableDictionary *_appLayoutToAction;
}


@property (readonly, copy, nonatomic) NSArray *appLayouts;


-(id)actionForAppLayout:(id)arg0 ;
-(void)setAction:(id)arg0 forAppLayout:(id)arg1 ;


@end


#endif