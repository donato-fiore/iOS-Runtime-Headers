// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSENVIRONMENTELEMENTMETADATAUPDATE_H
#define SSENVIRONMENTELEMENTMETADATAUPDATE_H

@class BSSettings, NSString;
@protocol BSXPCCoding, SSLoggable;

#import <Foundation/Foundation.h>

#import "SSHarvestedApplicationMetadata.h"

@interface SSEnvironmentElementMetadataUpdate : NSObject <BSXPCCoding, SSLoggable>



@property (readonly, nonatomic) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *environmentElementIdentifier; // ivar: _environmentElementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (retain, nonatomic) SSHarvestedApplicationMetadata *metadata; // ivar: _metadata
@property (readonly) Class superclass;


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif