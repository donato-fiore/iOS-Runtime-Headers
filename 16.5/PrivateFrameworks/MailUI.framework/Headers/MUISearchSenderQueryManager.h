// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHSENDERQUERYMANAGER_H
#define MUISEARCHSENDERQUERYMANAGER_H

@class EMSenderRepository, EFFuture;

#import <Foundation/Foundation.h>


@interface MUISearchSenderQueryManager : NSObject {
    EMSenderRepository *_senderRepository;
    EFFuture *_senderFilterQueryFuture;
}


@property (readonly, nonatomic) EFFuture *senderFilterQueryFuture;


-(id)initWithSenderRepository:(id)arg0 ;


@end


#endif