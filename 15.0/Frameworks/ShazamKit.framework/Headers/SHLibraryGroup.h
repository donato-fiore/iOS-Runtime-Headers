// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLIBRARYGROUP_H
#define SHLIBRARYGROUP_H

@class NSString;
@protocol SHLibraryItem;

#import <Foundation/Foundation.h>

#import "SHLibraryItemMetadata.h"

@interface SHLibraryGroup : NSObject <SHLibraryItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) SHLibraryItemMetadata *metadata; // ivar: _metadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualGroup:(id)arg0 ;
-(BOOL)validIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif