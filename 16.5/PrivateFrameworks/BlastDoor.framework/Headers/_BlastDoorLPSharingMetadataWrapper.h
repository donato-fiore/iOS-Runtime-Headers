// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPSHARINGMETADATAWRAPPER_H
#define _BLASTDOORLPSHARINGMETADATAWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPLinkMetadata.h"

@interface _BlastDoorLPSharingMetadataWrapper : NSObject <NSSecureCoding>



@property (nonatomic) BOOL hasCompletedFetch; // ivar: _hasCompletedFetch
@property (nonatomic) BOOL hasFetchedSubresources; // ivar: _hasFetchedSubresources
@property (retain, nonatomic) _BlastDoorLPLinkMetadata *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif