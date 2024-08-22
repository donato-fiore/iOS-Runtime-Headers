// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMTRICLIENTMANAGER_H
#define CDMTRICLIENTMANAGER_H

@class TRIClient, NSArray;

#import <Foundation/Foundation.h>


@interface CDMTRIClientManager : NSObject

@property (readonly, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (readonly, nonatomic) NSArray *trialNamespaceNames; // ivar: _trialNamespaceNames
@property (readonly, nonatomic) int trialProjectId; // ivar: _trialProjectId


-(id)description;
-(id)initForProjectId:(int)arg0 withNamespaceNames:(id)arg1 ;
-(void)initTRIClient;
-(void)refreshTRIClientInternalCache;
-(void)registerAssetsRefreshHandler;


@end


#endif