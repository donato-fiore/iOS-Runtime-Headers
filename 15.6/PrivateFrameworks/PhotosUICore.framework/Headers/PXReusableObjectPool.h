// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXREUSABLEOBJECTPOOL_H
#define PXREUSABLEOBJECTPOOL_H

@class NSMutableDictionary;
@protocol PXReusableObjectPoolDelegate;

#import <Foundation/Foundation.h>


@interface PXReusableObjectPool : NSObject {
    ? _delegateFlags;
}


@property (readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier; // ivar: __objectCreationBlocksByReuseIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier; // ivar: __reusableObjectsByReuseIdentifier
@property (weak, nonatomic) NSObject<PXReusableObjectPoolDelegate> *delegate; // ivar: _delegate


-(id)checkOutReusableObjectWithReuseIdentifier:(NSInteger)arg0 ;
-(id)init;
-(void)checkInReusableObject:(id)arg0 ;
-(void)registerReusableObjectForReuseIdentifier:(NSInteger)arg0 creationHandler:(id)arg1 ;
-(void)removeAllReusableObjectsWithReuseIdentifier:(NSInteger)arg0 ;


@end


#endif