// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SULOADNETWORKSECTIONSOPERATION_H
#define SULOADNETWORKSECTIONSOPERATION_H

@class ISOperation, ISStoreURLOperation, NSString;


#import "SUClientInterface.h"
#import "SUSectionsResponse.h"

@interface SULoadNetworkSectionsOperation : ISOperation {
    ISStoreURLOperation *_baseOperation;
    SUClientInterface *_clientInterface;
    NSString *_expectedVersionString;
    SUSectionsResponse *_sectionsResponse;
}


@property (retain) ISStoreURLOperation *baseOperation;
@property (retain) NSString *expectedVersionString;
@property (readonly) SUSectionsResponse *sectionsResponse;


-(BOOL)_loadArtworkForResponse:(id)arg0 ;
-(id)_bestItemImageForImages:(id)arg0 withImageKind:(id)arg1 ;
-(id)_copyImageWithURL:(id)arg0 scale:(float)arg1 error:(*id)arg2 ;
-(id)_copyLoadedItemImage:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 clientInterface:(id)arg1 ;
-(void)dealloc;
-(void)run;


@end


#endif