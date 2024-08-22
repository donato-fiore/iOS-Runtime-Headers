// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMERGEABLESTRINGPROXY_H
#define PFMERGEABLESTRINGPROXY_H

@class NSString;
@protocol NSMergeableTransformableStringAttributeValue;

#import <Foundation/Foundation.h>

#import "NSManagedObject.h"

@interface PFMergeableStringProxy : NSObject <NSMergeableTransformableStringAttributeValue>

 {
    NSManagedObject *_container;
    NSString *_key;
    NSObject<NSMergeableTransformableStringAttributeValue> *_mergeableString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsMergeableTransformable;
-(id)computedValue;
-(id)init;
-(id)initWithContainer:(id)arg0 key:(id)arg1 mergeableString:(id)arg2 ;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)merge:(id)arg0 ;
-(void)removeSubrange:(struct _NSRange )arg0 ;
-(void)replaceSubrange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setString:(id)arg0 ;


@end


#endif