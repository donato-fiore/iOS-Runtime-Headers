// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDMMCSITEMGROUP_H
#define CKDMMCSITEMGROUP_H

@class NSData, NSURL, CKAssetDownloadPreauthorization, NSError, NSArray, NSString;
@protocol MMCSOperationMetric;

#import <Foundation/Foundation.h>


@interface CKDMMCSItemGroup : NSObject

@property (retain, nonatomic) NSData *authPutRequest; // ivar: _authPutRequest
@property (nonatomic) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) NSURL *contentBaseURL;
@property (readonly, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSObject<MMCSOperationMetric> *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSArray *tuple; // ivar: _tuple


+(id)tupleForItem:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithTuple:(id)arg0 ;
-(void)addItem:(id)arg0 ;


@end


#endif