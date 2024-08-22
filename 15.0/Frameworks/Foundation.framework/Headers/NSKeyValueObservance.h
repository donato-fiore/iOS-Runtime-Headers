// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEOBSERVANCE_H
#define NSKEYVALUEOBSERVANCE_H


#import <Foundation/Foundation.h>

#import "NSKeyValueProperty.h"

@interface NSKeyValueObservance : NSObject {
    NSObject *_observer;
    NSKeyValueProperty *_property;
    *void _context;
    NSObject *_originalObservable;
    BOOL _options;
    BOOL _cachedIsShareable;
    BOOL _isInternalObservationHelper;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithObserver:(id)arg0 property:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 originalObservable:(id)arg4 ;
-(id)description;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif