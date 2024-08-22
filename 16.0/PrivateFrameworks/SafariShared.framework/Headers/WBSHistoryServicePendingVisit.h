// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYSERVICEPENDINGVISIT_H
#define WBSHISTORYSERVICEPENDINGVISIT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WBSHistoryVisitIdentifier.h"

@interface WBSHistoryServicePendingVisit : NSObject

@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (nonatomic) BOOL loadSuccessful; // ivar: _loadSuccessful
@property (nonatomic) NSUInteger operation; // ivar: _operation
@property (nonatomic) NSInteger origin; // ivar: _origin
@property (readonly, nonatomic) NSUInteger score;
@property (retain, nonatomic) WBSHistoryVisitIdentifier *sourceVisitIdentifier; // ivar: _sourceVisitIdentifier
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier; // ivar: _visitIdentifier
@property (readonly, nonatomic) CGFloat visitTime;
@property (nonatomic) BOOL wasHTTPNonGet; // ivar: _wasHTTPNonGet


-(id)initWithWithVisitIdentifier:(id)arg0 ;


@end


#endif