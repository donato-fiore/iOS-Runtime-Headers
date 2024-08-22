// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDSPOTLIGHTDELETIONOPERATION_H
#define _CDSPOTLIGHTDELETIONOPERATION_H

@class NSString, NSSet;
@protocol NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>


@interface _CDSpotlightDeletionOperation : NSObject <NSSecureCoding, BMStoreData>



@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *deletionType; // ivar: _deletionType
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *domainIdentifiers; // ivar: _domainIdentifiers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *itemIdentifiers; // ivar: _itemIdentifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)deletionForEventsWithDomainIdentifiers:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
+(id)deletionForEventsWithItemIdentifiers:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeletionType:(id)arg0 bundleId:(id)arg1 itemIdentifiers:(id)arg2 domainIdentifiers:(id)arg3 completion:(id)arg4 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif