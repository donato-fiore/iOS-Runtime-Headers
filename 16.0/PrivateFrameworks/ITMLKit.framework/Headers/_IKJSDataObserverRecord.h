// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IKJSDATAOBSERVERRECORD_H
#define _IKJSDATAOBSERVERRECORD_H

@class NSString;
@protocol IKJSDataObserving;

#import <Foundation/Foundation.h>


@interface _IKJSDataObserverRecord : NSObject {
    ? _observerFlags;
}


@property (readonly, weak, nonatomic) NSObject<IKJSDataObserving> *observer; // ivar: _observer
@property (readonly, nonatomic) NSString *observerHash; // ivar: _observerHash
@property (readonly, nonatomic) NSString *pathString; // ivar: _pathString


+(id)hashForObserver:(id)arg0 ;
-(BOOL)isAffectedByPropertyPathWithString:(id)arg0 subpathString:(*id)arg1 ;
-(id)initWithObserver:(id)arg0 pathString:(id)arg1 ;


@end


#endif