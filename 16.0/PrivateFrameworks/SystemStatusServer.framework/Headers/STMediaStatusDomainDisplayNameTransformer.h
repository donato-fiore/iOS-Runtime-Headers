// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMEDIASTATUSDOMAINDISPLAYNAMETRANSFORMER_H
#define STMEDIASTATUSDOMAINDISPLAYNAMETRANSFORMER_H

@protocol STStatusDomainDataTransforming, STAttributedEntityBatchResolving;

#import <Foundation/Foundation.h>


@interface STMediaStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming>

 {
    id<STAttributedEntityBatchResolving> *_entityResolver;
}




-(id)initWithEntityResolver:(id)arg0 ;
-(id)transformedDataForData:(id)arg0 ;


@end


#endif