// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKEGROUPINGRESULT_H
#define CHSTROKEGROUPINGRESULT_H

@class NSArray, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding>

 {
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_textStrokeGroupsSortedByWritingOrientation;
    NSArray *_strokeGroupsSortedByWritingOrientation;
    NSArray *_textStrokeGroupClusters;
    NSArray *_strokeGroupClusters;
    NSSet *_textStrokeGroups;
}


@property (readonly, copy, nonatomic) NSSet *createdStrokeGroups; // ivar: _createdStrokeGroups
@property (readonly, copy, nonatomic) NSSet *deletedStrokeGroups; // ivar: _deletedStrokeGroups
@property (readonly, copy, nonatomic) NSArray *strokeGroupClusters;
@property (readonly, copy, nonatomic) NSSet *strokeGroups; // ivar: _strokeGroups
@property (readonly, copy, nonatomic) NSArray *strokeGroupsSortedByWritingOrientation;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupClusters;
@property (readonly, copy, nonatomic) NSSet *textStrokeGroups;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedByWritingOrientation;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedTopBottomLeftRight;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStrokeGroupingResult:(id)arg0 ;
-(id)_sortedStrokeGroupsByWritingOrientationTextOnly:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeGroups:(id)arg0 createdStrokeGroups:(id)arg1 deletedStrokeGroups:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif