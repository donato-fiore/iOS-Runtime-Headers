// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWMUTABLECOLLABORATIONMETADATA_H
#define _SWMUTABLECOLLABORATIONMETADATA_H

@class NSArray, NSString, NSPersonNameComponents;


#import "SWCollaborationMetadata.h"
#import "_SWCollaborationShareOptions.h"

@interface _SWMutableCollaborationMetadata : SWCollaborationMetadata

@property (copy, nonatomic) NSArray *defaultOptions;
@property (copy, nonatomic) _SWCollaborationShareOptions *defaultShareOptions;
@property (copy, nonatomic) NSString *initiatorHandle;
@property (retain, nonatomic) NSPersonNameComponents *initiatorNameComponents;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationIdentifier:(id)arg0 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif