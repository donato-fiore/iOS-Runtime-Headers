// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSJSITEMGROUP_H
#define VSJSITEMGROUP_H

@class IKJSObject;
@protocol VSJSItemGroup, VSJSItemGroupBridge;



@interface VSJSItemGroup : IKJSObject <VSJSItemGroup>



@property (retain, nonatomic) NSObject<VSJSItemGroupBridge> *bridge; // ivar: _bridge
@property (nonatomic) NSInteger selectedItem; // ivar: _selectedItem




@end


#endif