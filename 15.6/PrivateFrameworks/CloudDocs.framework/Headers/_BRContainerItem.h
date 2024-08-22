// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BRCONTAINERITEM_H
#define _BRCONTAINERITEM_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying;


#import "BRQueryItem.h"

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying>

 {
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
    BOOL _isPristine;
}




+(BOOL)supportsSecureCoding;
-(BOOL)fp_isContainer;
-(BOOL)fp_isContainerPristine;
-(BOOL)isHidden;
-(NSUInteger)capabilities;
-(id)containerDisplayName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayName;
-(id)filename;
-(id)fp_cloudContainerClientBundleIdentifiers;
-(id)fp_cloudContainerIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryItem:(id)arg0 container:(id)arg1 zoneRowID:(id)arg2 ;
-(id)itemIdentifier;
-(id)parentItemIdentifier;
-(id)subclassDescription;
-(id)typeIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif