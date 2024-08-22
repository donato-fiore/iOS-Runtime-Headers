// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDWARNINGHIDEMARKER_H
#define WBSPASSWORDWARNINGHIDEMARKER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WBSPasswordWarningHideMarker : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSUInteger issueTypes; // ivar: _issueTypes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithIssueTypes:(NSUInteger)arg0 ;


@end


#endif