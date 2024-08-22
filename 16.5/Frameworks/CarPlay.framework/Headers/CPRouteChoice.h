// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPROUTECHOICE_H
#define CPROUTECHOICE_H

@class NSArray, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPRouteChoice : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *additionalInformationVariants; // ivar: _additionalInformationVariants
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *selectionSummaryVariants; // ivar: _selectionSummaryVariants
@property (copy, nonatomic) NSArray *summaryVariants; // ivar: _summaryVariants
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSummaryVariants:(id)arg0 additionalInformationVariants:(id)arg1 selectionSummaryVariants:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif