// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWKDOCUMENTREQUEST_H
#define UIWKDOCUMENTREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIWKDocumentRequest : NSObject

@property (nonatomic) CGRect documentRect; // ivar: _documentRect
@property (nonatomic) NSInteger flags; // ivar: _flags
@property (nonatomic) NSInteger granularityCount; // ivar: _granularityCount
@property (retain, nonatomic) NSObject<NSCopying> *inputElementIdentifier; // ivar: _inputElementIdentifier
@property (nonatomic) NSInteger surroundingGranularity; // ivar: _surroundingGranularity


-(void)dealloc;


@end


#endif