// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSTABLECONTACTREPRESENTATION_H
#define ATXSTABLECONTACTREPRESENTATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXStableContactRepresentation : NSObject

@property (readonly, nonatomic) NSString *cnContactId; // ivar: _cnContactId
@property (readonly, nonatomic) NSString *rawIdentifier; // ivar: _rawIdentifier
@property (readonly, nonatomic) NSString *stableContactIdentifier; // ivar: _stableContactIdentifier


-(id)initWithStableContactIdentifier:(id)arg0 cnContactId:(id)arg1 rawIdentifier:(id)arg2 ;


@end


#endif