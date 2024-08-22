// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHSENDERQUERYMANAGER_H
#define MUISEARCHSENDERQUERYMANAGER_H

@class EMSenderRepository, NSString;

#import <Foundation/Foundation.h>


@interface MUISearchSenderQueryManager : NSObject {
    EMSenderRepository *_senderRepository;
    NSString *_senderFilterQuery;
}


@property (readonly, copy, nonatomic) NSString *senderFilterQuery;


-(id)initWithSenderRepository:(id)arg0 ;


@end


#endif