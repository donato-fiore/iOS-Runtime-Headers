// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELACTIONDETAILS_H
#define ATXANCHORMODELACTIONDETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelActionDetails : NSObject

@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSInteger paramHash; // ivar: _paramHash


-(id)init;
-(id)initWithBundleId:(id)arg0 actionType:(id)arg1 paramHash:(NSInteger)arg2 ;


@end


#endif