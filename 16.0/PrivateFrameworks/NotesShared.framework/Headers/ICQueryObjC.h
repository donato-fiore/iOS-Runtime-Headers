// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUERYOBJC_H
#define ICQUERYOBJC_H

@class NSString, NSPredicate;

#import <Foundation/Foundation.h>


@interface ICQueryObjC : NSObject {
    ? entity;
    ? type;
}


@property (nonatomic, readonly) BOOL canBeEdited;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSInteger minimumSupportedVersion;
@property (nonatomic, readonly) NSPredicate *predicate;


-(BOOL)isEqual:(id)arg0 ;
-(id)filterSelectionWithManagedObjectContext:(id)arg0 account:(id)arg1 ;
-(id)init;
-(id)tagSelectionWithManagedObjectContext:(id)arg0 ;


@end


#endif