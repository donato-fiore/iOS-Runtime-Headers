// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRJSOBJECT_H
#define CRJSOBJECT_H

@protocol CRJSObjectExport;

#import <Foundation/Foundation.h>


@interface CRJSObject : NSObject <CRJSObjectExport>



@property (readonly, nonatomic) id *backingObject; // ivar: _backingObject


+(id)objectWithClassName:(id)arg0 objectType:(id)arg1 ;
-(id)_backingObjectForJSValue:(id)arg0 ;
-(id)backingObjectValueForKey:(id)arg0 ;
-(id)initWithClassName:(id)arg0 objectType:(NSInteger)arg1 ;
-(void)_logErrorLog:(id)arg0 ;


@end


#endif