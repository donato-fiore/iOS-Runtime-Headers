// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPLACEHOLDERRECORD_H
#define CPLPLACEHOLDERRECORD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CPLScopedIdentifier.h"

@interface CPLPlaceholderRecord : NSObject

@property (readonly, nonatomic) Class recordClass; // ivar: _recordClass
@property (readonly, nonatomic) NSString *relatedIdentifier; // ivar: _relatedIdentifier
@property (readonly, nonatomic) Class relatedRecordClass; // ivar: _relatedRecordClass
@property (readonly, nonatomic) CPLScopedIdentifier *relatedScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier; // ivar: _scopedIdentifier


-(id)description;
-(id)initWithRecord:(id)arg0 ;
-(id)initWithRecordClass:(Class)arg0 scopedIdentifier:(id)arg1 relatedRecordClass:(Class)arg2 relatedIdentifier:(id)arg3 ;
-(id)redactedDescription;
-(id)translateToClientRecordUsingIDMapping:(id)arg0 ;
-(id)translateToCloudRecordUsingIDMapping:(id)arg0 ;


@end


#endif