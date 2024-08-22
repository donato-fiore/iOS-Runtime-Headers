// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWEBARCHIVE_H
#define WFWEBARCHIVE_H

@class NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFWebResource.h"

@interface WFWebArchive : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) WFWebResource *mainResource; // ivar: _mainResource
@property (readonly, nonatomic) NSArray *subframeArchives; // ivar: _subframeArchives
@property (readonly, nonatomic) NSArray *subresources; // ivar: _subresources


+(BOOL)supportsSecureCoding;
-(id)containedImageFiles;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMainResource:(id)arg0 subresources:(id)arg1 subframeArchives:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif