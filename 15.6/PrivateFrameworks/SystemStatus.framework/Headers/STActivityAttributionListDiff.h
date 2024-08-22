// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STACTIVITYATTRIBUTIONLISTDIFF_H
#define STACTIVITYATTRIBUTIONLISTDIFF_H

@class NSString;
@protocol STStatusDomainDataDiff, NSCopying;

#import <Foundation/Foundation.h>

#import "STListDataDiff.h"

@interface STActivityAttributionListDiff : NSObject <STStatusDomainDataDiff, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STListDataDiff *listDataDiff; // ivar: _listDataDiff
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromList:(id)arg0 toList:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListDataDiff:(id)arg0 ;
-(id)listByApplyingToList:(id)arg0 ;
-(void)applyToMutableList:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif