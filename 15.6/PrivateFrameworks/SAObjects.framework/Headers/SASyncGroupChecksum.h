// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASYNCGROUPCHECKSUM_H
#define SASYNCGROUPCHECKSUM_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASyncAnchor.h"

@interface SASyncGroupChecksum : AceObject <SAAceSerializable>



@property (nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainObjectClass;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifierChecksum;
@property (readonly) Class superclass;
@property (retain, nonatomic) SASyncAnchor *syncAnchor;


+(id)groupChecksum;
+(id)groupChecksumWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif