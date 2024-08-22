// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTSUPPLEMENTARYREGISTRAR_H
#define _UICOLLECTIONLAYOUTSUPPLEMENTARYREGISTRAR_H

@class NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSString;
@protocol _UICollectionLayoutSupplementaryEnrolling;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSupplementaryRegistrar : NSObject <_UICollectionLayoutSupplementaryEnrolling>

 {
    NSMutableOrderedSet *_enrollmentIdentifiers;
    NSMutableSet *_uncommittedEnrollmentIdentifiers;
    NSMutableDictionary *_enrollmentsDict;
    NSMutableDictionary *_kindEnrollmentsDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)countForKind:(id)arg0 ;
-(NSInteger)kindIndexForEnrollmentIdentifier:(id)arg0 ;
-(id)enrollSupplementaryForKind:(id)arg0 ;
-(id)init;
-(void)commitEnrollment:(id)arg0 ;
-(void)pruneUncommitedEnrollments;


@end


#endif