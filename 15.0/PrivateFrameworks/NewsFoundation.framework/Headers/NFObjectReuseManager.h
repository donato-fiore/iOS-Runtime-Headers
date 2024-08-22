// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFOBJECTREUSEMANAGER_H
#define NFOBJECTREUSEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NFObjectReuseManager : NSObject

@property (copy, nonatomic) NSMutableDictionary *inuseObjects; // ivar: _inuseObjects
@property (copy, nonatomic) id *reuseFactory; // ivar: _reuseFactory
@property (copy, nonatomic) NSMutableDictionary *reuseableObjects; // ivar: _reuseableObjects


-(BOOL)isInUse:(id)arg0 ;
-(id)dequeueObjectForIdentifier:(id)arg0 ;
-(id)inUseObjectForIdentifier:(id)arg0 ;
-(id)initWithObjectConstructor:(id)arg0 ;
-(void)prepareObjectForReuse:(id)arg0 ;
-(void)purgeObjectForIdentifier:(id)arg0 ;


@end


#endif