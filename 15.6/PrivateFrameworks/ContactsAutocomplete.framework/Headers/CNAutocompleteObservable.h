// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEOBSERVABLE_H
#define CNAUTOCOMPLETEOBSERVABLE_H

@class CNObservable, NSString;



@interface CNAutocompleteObservable : CNObservable

@property (retain, nonatomic) NSString *debugDescription; // ivar: _debugDescription
@property (retain, nonatomic) CNObservable *observable; // ivar: _observable


-(id)initWithBlock:(id)arg0 ;
-(id)subscribe:(id)arg0 ;


@end


#endif