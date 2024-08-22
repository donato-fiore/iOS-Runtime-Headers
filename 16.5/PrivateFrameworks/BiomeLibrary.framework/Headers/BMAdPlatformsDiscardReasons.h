// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMADPLATFORMSDISCARDREASONS_H
#define BMADPLATFORMSDISCARDREASONS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMAdPlatformsDiscardReasons : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSUInteger brandIdentifier; // ivar: _brandIdentifier
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int discardReason; // ivar: _discardReason
@property (readonly, nonatomic) int displayOrder; // ivar: _displayOrder
@property (nonatomic) BOOL hasBrandIdentifier; // ivar: _hasBrandIdentifier
@property (nonatomic) BOOL hasDisplayOrder; // ivar: _hasDisplayOrder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int placement; // ivar: _placement
@property (readonly, nonatomic) NSString *searchTerms; // ivar: _searchTerms
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDiscardReason:(int)arg0 placement:(int)arg1 bundleID:(id)arg2 brandIdentifier:(id)arg3 displayOrder:(id)arg4 searchTerms:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif