// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCASSETKEYCONTENTARCHIVE_H
#define FCASSETKEYCONTENTARCHIVE_H

@class NSData;


#import "FCContentArchive.h"

@interface FCAssetKeyContentArchive : FCContentArchive {
    NSData *_wrappingKey;
    NSData *_wrappingKeyID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)manifest;
-(id)unarchiveIntoContentContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif