// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFHOMEACCESSORYSIRIDATASHARINGCHANGELOGEVENTMUTATION_H
#define _AFHOMEACCESSORYSIRIDATASHARINGCHANGELOGEVENTMUTATION_H

@class NSDate, NSString;
@protocol AFHomeAccessorySiriDataSharingChangeLogEventMutating;

#import <Foundation/Foundation.h>

#import "AFHomeAccessorySiriDataSharingChangeLogEvent.h"

@interface _AFHomeAccessorySiriDataSharingChangeLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingChangeLogEventMutating>

 {
    AFHomeAccessorySiriDataSharingChangeLogEvent *_baseModel;
    NSDate *_date;
    NSInteger _previousOptInStatus;
    NSInteger _newOptInStatus;
    NSInteger _changeSource;
    NSString *_changeReason;
    NSString *_buildVersion;
    NSString *_productVersion;
    NSString *_schemaVersion;
    NSString *_logEventIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setBuildVersion:(id)arg0 ;
-(void)setChangeReason:(id)arg0 ;
-(void)setChangeSource:(NSInteger)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)setLogEventIdentifier:(id)arg0 ;
-(void)setNewOptInStatus:(NSInteger)arg0 ;
-(void)setPreviousOptInStatus:(NSInteger)arg0 ;
-(void)setProductVersion:(id)arg0 ;
-(void)setSchemaVersion:(id)arg0 ;


@end


#endif