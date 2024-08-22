// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFOBJECTOBSERVER_H
#define CARPFOBJECTOBSERVER_H



#import "CARPFObject.h"

@interface CARPFObjectObserver : CARPFObject

@property (readonly) NSUInteger cachedHash; // ivar: _cachedHash
@property (copy) id *deallocationBlock; // ivar: _deallocationBlock
@property (readonly, weak) id *observedObject; // ivar: _observedObject


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithObservedObject:(id)arg0 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)dealloc;


@end


#endif