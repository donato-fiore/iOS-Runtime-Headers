// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNBLACKLIST_H
#define VNBLACKLIST_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VNBlacklist : NSObject <NSCopying>

 {
    NSSet *_identifiers;
}


@property (readonly, copy) NSSet *allIdentifiers;
@property (readonly) NSUInteger identifierCount;


+(id)blacklistFromUTF8StringArray:(*char *)arg0 ;
-(BOOL)containsIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;


@end


#endif