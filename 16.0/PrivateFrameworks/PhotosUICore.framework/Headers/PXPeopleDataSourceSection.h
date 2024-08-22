// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEDATASOURCESECTION_H
#define PXPEOPLEDATASOURCESECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXPeopleDataSourceSection : NSObject

@property (getter=isDisclosed) BOOL disclosed; // ivar: _disclosed
@property (copy, nonatomic) NSString *disclosedTitle; // ivar: _disclosedTitle
@property (readonly, nonatomic) NSUInteger personFetchType; // ivar: _personFetchType
@property (copy, nonatomic) NSString *unDisclosedTitle; // ivar: _unDisclosedTitle


-(id)initWithPersonFetchType:(NSUInteger)arg0 ;


@end


#endif