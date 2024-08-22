// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDECODERDATAINFO_H
#define TSPDECODERDATAINFO_H

@class NSString;
@protocol TSPDecoderDataInfo;

#import <Foundation/Foundation.h>

#import "TSPDataMetadata.h"
#import "TSPDigest.h"

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo>



@property (retain, nonatomic) TSPDataMetadata *dataMetadata; // ivar: _dataMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDigest *digest; // ivar: _digest
@property (readonly, nonatomic) NSString *documentResourceLocator; // ivar: _documentResourceLocator
@property (readonly, nonatomic) NSString *externalFilePath; // ivar: _externalFilePath
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSString *preferredFilename; // ivar: _preferredFilename
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(NSInteger)arg0 digest:(id)arg1 length:(NSUInteger)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5 ;
-(id)initWithMessage:(*void)arg0 ;


@end


#endif