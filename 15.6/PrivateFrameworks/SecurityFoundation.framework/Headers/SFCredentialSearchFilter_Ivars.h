// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCREDENTIALSEARCHFILTER_IVARS_H
#define SFCREDENTIALSEARCHFILTER_IVARS_H

@class NSDate, NSArray<_SFServiceIdentifier>, NSArray;

#import <Foundation/Foundation.h>


@interface SFCredentialSearchFilter_Ivars : NSObject {
    NSDate *minimumCreationDate;
    NSDate *maximumCreationDate;
    NSDate *minimumModificationDate;
    NSDate *maximumModificationDate;
    NSArray<_SFServiceIdentifier> *serviceIdentifiers;
    NSArray *usernames;
}






@end


#endif