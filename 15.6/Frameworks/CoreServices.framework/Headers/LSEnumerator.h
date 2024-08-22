// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSENUMERATOR_H
#define LSENUMERATOR_H

@class NSEnumerator, NSPredicate;
@protocol NSCopying;



@interface LSEnumerator : NSEnumerator <NSCopying>

 {
    id *_filter;
    atomic<bool> _hasFiredErrorHandler;
}


@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *filter;
@property (copy, nonatomic) NSPredicate *predicate;


+(id)enumeratorForApplicationProxiesWithOptions:(NSUInteger)arg0 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg0 options:(NSUInteger)arg1 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg0 options:(NSUInteger)arg1 filter:(id)arg2 ;
+(id)new;
+(void)initialize;
-(id)_initWithContext:(struct LSContext *)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)nextObject;
-(id)swift_firstWhere:(id)arg0 ;
-(void)swift_forEach:(id)arg0 ;


@end


#endif