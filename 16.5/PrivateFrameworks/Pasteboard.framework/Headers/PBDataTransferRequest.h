// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBDATATRANSFERREQUEST_H
#define PBDATATRANSFERREQUEST_H

@class NSString, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "PBItem.h"
#import "PBItemCollection.h"
#import "PBItemRepresentation.h"

@interface PBDataTransferRequest : NSObject <NSProgressReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PBItem *item; // ivar: _item
@property (retain, nonatomic) PBItemCollection *itemCollection; // ivar: _itemCollection
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) PBItemRepresentation *repr; // ivar: _repr
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;




@end


#endif