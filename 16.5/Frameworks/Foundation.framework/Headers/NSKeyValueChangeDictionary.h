// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUECHANGEDICTIONARY_H
#define NSKEYVALUECHANGEDICTIONARY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NSKeyValueChangeDictionary : NSDictionary {
    ? _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}




-(NSUInteger)count;
-(id)initWithDetailsNoCopy:(struct ? )arg0 originalObservable:(id)arg1 isPriorNotification:(BOOL)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)retainObjects;
-(void)setDetailsNoCopy:(struct ? )arg0 originalObservable:(id)arg1 ;
-(void)setOriginalObservable:(id)arg0 ;


@end


#endif