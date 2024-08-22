// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPFETCHRESULT_H
#define MFIMAPFETCHRESULT_H


#import <Foundation/Foundation.h>


@interface MFIMAPFetchResult : NSObject {
    int _itemType;
    NSUInteger _modSequenceNumber;
    NSArray""internalDate"@"NSDate""messageSize"Q"bodyStructure"@"NSArray""appleRemoteLinks"@"NSArray""bodySectionInfo"{?="section"@"NSString""startOffset"Q"sectionData"@"NSData"}"uid"I"uniqueRemoteId"Q"flags"{?="messageFlags"Q"customFlags"@"NSArray"} _typeSpecific;
}




-(NSUInteger)messageFlags;
-(NSUInteger)messageSize;
-(NSUInteger)modSequenceNumber;
-(NSUInteger)startOffset;
-(NSUInteger)uniqueRemoteId;
-(id)appleRemoteLinks;
-(id)bodyStructure;
-(id)customFlagsArray;
-(id)description;
-(id)envelope;
-(id)fetchData;
-(id)flagsArray;
-(id)initWithType:(int)arg0 ;
-(id)internalDate;
-(id)section;
-(int)type;
-(unsigned int)encoding;
-(unsigned int)uid;
-(void)dealloc;
-(void)setAppleRemoteLinks:(id)arg0 ;
-(void)setBodyStructure:(id)arg0 ;
-(void)setCustomFlagsArray:(id)arg0 ;
-(void)setEnvelope:(id)arg0 ;
-(void)setFetchData:(id)arg0 ;
-(void)setFlagsArray:(id)arg0 ;
-(void)setInternalDate:(id)arg0 ;
-(void)setMessageFlags:(NSUInteger)arg0 ;
-(void)setMessageSize:(NSUInteger)arg0 ;
-(void)setModSequenceNumber:(NSUInteger)arg0 ;
-(void)setSection:(id)arg0 ;
-(void)setStartOffset:(NSUInteger)arg0 ;
-(void)setUid:(unsigned int)arg0 ;
-(void)setUniqueRemoteId:(NSUInteger)arg0 ;


@end


#endif