// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADPREDICATE_H
#define CADPREDICATE_H

@class NSPredicate, NSArray, NSDictionary;
@protocol NSSecureCoding, NSFastEnumeration;



@interface CADPredicate : NSPredicate <NSSecureCoding>



@property (readonly, nonatomic) NSObject<NSFastEnumeration> *databasesToQuery;
@property (readonly, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly, nonatomic) NSDictionary *relatedObjectPropertiesToLoad;


+(void)setValidator:(Class)arg0 ;
-(?)copyMatchingItemsWithDatabase;
-(BOOL)evaluateWithObject:(id)arg0 ;


@end


#endif