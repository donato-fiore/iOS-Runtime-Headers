// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVOBLOCKHELPER_H
#define CKVOBLOCKHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKVOBlockHelper : NSObject

@property (nonatomic) NSInteger nextIdentifier; // ivar: _nextIdentifier
@property (readonly, weak, nonatomic) id *observedObject; // ivar: _observedObject
@property (readonly, nonatomic) NSMutableDictionary *tokensByContext; // ivar: _tokensByContext


-(id)allKVOObservers;
-(id)debugDescription;
-(id)initWithObject:(id)arg0 ;
-(id)insertNewTokenForKeyPath:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)dump;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeHandlerForKey:(id)arg0 ;


@end


#endif