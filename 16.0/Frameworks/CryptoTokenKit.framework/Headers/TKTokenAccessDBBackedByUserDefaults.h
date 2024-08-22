// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENACCESSDBBACKEDBYUSERDEFAULTS_H
#define TKTOKENACCESSDBBACKEDBYUSERDEFAULTS_H

@class NSUserDefaults, NSString;
@protocol TKTokenAccessDB;

#import <Foundation/Foundation.h>


@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB>

 {
    NSUserDefaults *_db;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)fetchAccessForRequest:(id)arg0 ;
-(id)_keyRefForRequest:(id)arg0 ;
-(id)init;
-(void)clearAllAccessRecords;
-(void)storeAccess:(NSInteger)arg0 forRequest:(id)arg1 ;


@end


#endif