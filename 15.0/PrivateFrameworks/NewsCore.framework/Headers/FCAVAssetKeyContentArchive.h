// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCAVASSETKEYCONTENTARCHIVE_H
#define FCAVASSETKEYCONTENTARCHIVE_H

@class NTPBAVAssetKey;


#import "FCContentArchive.h"

@interface FCAVAssetKeyContentArchive : FCContentArchive {
    NTPBAVAssetKey *_avAssetKey;
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