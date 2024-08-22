// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFREORDERABLEITEMLISTABSTRACTBASE_H
#define HFREORDERABLEITEMLISTABSTRACTBASE_H

@class NSString;
@protocol HMApplicationData;

#import <Foundation/Foundation.h>


@interface HFReorderableItemListAbstractBase : NSObject

@property (readonly, weak, nonatomic) NSObject<HMApplicationData> *applicationDataContainer; // ivar: _applicationDataContainer
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly) BOOL isEmpty;


-(id)init;
-(id)initWithApplicationDataContainer:(id)arg0 category:(id)arg1 ;
-(id)saveWithSender:(id)arg0 ;
-(void)setSortedItems:(id)arg0 ;


@end


#endif