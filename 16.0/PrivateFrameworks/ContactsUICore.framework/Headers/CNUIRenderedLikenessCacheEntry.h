// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIRENDEREDLIKENESSCACHEENTRY_H
#define CNUIRENDEREDLIKENESSCACHEENTRY_H

@class NSArray, CNObservable;
@protocol CNCancelable;

#import <Foundation/Foundation.h>

#import "CNUILikenessRenderingScope.h"

@interface CNUIRenderedLikenessCacheEntry : NSObject

@property (readonly, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) CNObservable *imageObservable; // ivar: _imageObservable
@property (readonly, nonatomic) CNUILikenessRenderingScope *scope; // ivar: _scope
@property (readonly, nonatomic) NSObject<CNCancelable> *token; // ivar: _token


+(id)entryWithObservable:(id)arg0 token:(id)arg1 contacts:(id)arg2 scope:(id)arg3 ;
-(id)description;
-(id)initWithObservable:(id)arg0 token:(id)arg1 contacts:(id)arg2 scope:(id)arg3 ;


@end


#endif