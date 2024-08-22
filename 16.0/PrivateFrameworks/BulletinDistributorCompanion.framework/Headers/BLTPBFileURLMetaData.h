// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTPBFILEURLMETADATA_H
#define BLTPBFILEURLMETADATA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BLTPBFileURLMetaData : NSObject

@property (readonly, nonatomic) NSDictionary *extraMetadata; // ivar: _extraMetadata
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSInteger sequenceNumberError; // ivar: _sequenceNumberError
@property (readonly, nonatomic) NSUInteger sessionState; // ivar: _sessionState


-(id)initWithMetadata:(id)arg0 sequenceNumberManager:(id)arg1 ;
-(id)initWithSequenceNumberManager:(id)arg0 extraMetadata:(id)arg1 ;
-(id)transportData;


@end


#endif