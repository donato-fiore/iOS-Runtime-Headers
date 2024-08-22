// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTAWDLCOLLECTOR_H
#define NPTAWDLCOLLECTOR_H

@class NSMutableDictionary, NSString, CWFInterface;
@protocol NPTMetadataCollection;

#import <Foundation/Foundation.h>


@interface NPTAWDLCollector : NSObject <NPTMetadataCollection>



@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CWFInterface *interface; // ivar: _interface
@property (copy) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (readonly) Class superclass;


+(id)collectorName;
-(id)awdlOpModeString;
-(id)fetchAWDLData;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif