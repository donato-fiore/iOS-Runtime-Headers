// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGDATASOURCE_H
#define CNMECARDSHARINGDATASOURCE_H


#import <Foundation/Foundation.h>


@interface CNMeCardSharingDataSource : NSObject

@property (nonatomic) NSUInteger meCardSharingStatus; // ivar: _meCardSharingStatus


+(id)localizedStringForMeCardSharingStatus:(NSUInteger)arg0 ;
-(id)init;
-(id)localizedStringForMeCardSharingStatus;


@end


#endif