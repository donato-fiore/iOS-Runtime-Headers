// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUERYOBJC_H
#define ICQUERYOBJC_H

@class NSString, NSPredicate, NSArray;

#import <Foundation/Foundation.h>


@interface ICQueryObjC : NSObject {
    ? entity;
    ? type;
}


@property (nonatomic, readonly) BOOL canBeEdited;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSArray *tagIdentifiers;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif