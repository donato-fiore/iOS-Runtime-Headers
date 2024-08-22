// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUPARAMETERNODE_H
#define AUPARAMETERNODE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AUParameterGroup.h"

@interface AUParameterNode : NSObject

@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *impl_implementorDisplayNameWithLengthCallback; // ivar: _impl_implementorDisplayNameWithLengthCallback
@property (copy, nonatomic) id *impl_implementorStringFromValueCallback; // ivar: _impl_implementorStringFromValueCallback
@property (copy, nonatomic) id *impl_implementorValueFromStringCallback; // ivar: _impl_implementorValueFromStringCallback
@property (copy, nonatomic) id *impl_implementorValueObserver; // ivar: _impl_implementorValueObserver
@property (copy, nonatomic) id *impl_implementorValueProvider; // ivar: _impl_implementorValueProvider
@property (copy, nonatomic) id *implementorDisplayNameWithLengthCallback;
@property (copy, nonatomic) id *implementorStringFromValueCallback;
@property (copy, nonatomic) id *implementorValueFromStringCallback;
@property (copy, nonatomic) id *implementorValueObserver;
@property (copy, nonatomic) id *implementorValueProvider;
@property (nonatomic) NSUInteger indexInGroup; // ivar: _indexInGroup
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (nonatomic) *void observerList; // ivar: _observerList
@property (weak, nonatomic) AUParameterGroup *parentNode; // ivar: _parentNode


// -(*void)_addRecObserver:(id)arg0 autoObserver:(unk)arg1  ;
-(*void)tokenByAddingParameterAutomationObserver:(id)arg0 ;
-(*void)tokenByAddingParameterObserver:(id)arg0 ;
-(*void)tokenByAddingParameterRecordingObserver:(id)arg0 ;
-(BOOL)isGroup;
-(id)_rootParent;
-(id)copyNodeWithOffset:(NSUInteger)arg0 ;
-(id)description;
-(id)displayNameWithLength:(NSInteger)arg0 ;
-(id)initWithID:(id)arg0 name:(id)arg1 ;
-(void)_deserialize:(struct CADeserializer *)arg0 fromSetFullState:(BOOL)arg1 ;
-(void)_observersChanged:(BOOL)arg0 deltaCount:(int)arg1 ;
-(void)_serialize:(struct CASerializer *)arg0 ;
-(void)_walkTree:(int)arg0 callback:(id)arg1 ;
-(void)dealloc;
-(void)removeParameterObserver:(*void)arg0 ;


@end


#endif