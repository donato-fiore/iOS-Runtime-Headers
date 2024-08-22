// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECABGROUPIDENTIFIERUSERDEFAULTSSTORE_H
#define WBSPARSECABGROUPIDENTIFIERUSERDEFAULTSSTORE_H

@class NSString, NSDate, NSNumber;
@protocol WBSParsecABGroupStore, WBSParsecABGroupStoreClient;

#import <Foundation/Foundation.h>


@interface WBSParsecABGroupIdentifierUserDefaultsStore : NSObject <WBSParsecABGroupStore>



@property (weak, nonatomic) NSObject<WBSParsecABGroupStoreClient> *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *generationDate;
@property (retain, nonatomic) NSNumber *groupIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif