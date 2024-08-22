// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPSHARINGMETADATAWRAPPER_H
#define LPSHARINGMETADATAWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>



@property (nonatomic) BOOL hasCompletedFetch; // ivar: _hasCompletedFetch
@property (nonatomic) BOOL hasFetchedSubresources; // ivar: _hasFetchedSubresources
@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif