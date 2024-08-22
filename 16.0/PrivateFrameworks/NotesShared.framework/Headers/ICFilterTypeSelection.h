// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFILTERTYPESELECTION_H
#define ICFILTERTYPESELECTION_H

@class NSManagedObjectID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICFilterTypeSelection : NSObject <NSCopying>



@property (retain, nonatomic) NSManagedObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, nonatomic) NSString *emptySummary;
@property (readonly, nonatomic) NSString *emptySummaryTitle;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) NSUInteger filterType; // ivar: _filterType
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSString *rawFilterValue;
@property (readonly, nonatomic) NSString *shortEmptySummary;


+(id)keyPathsForValuesAffectingIsValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif