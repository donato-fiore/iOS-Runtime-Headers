// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSISTEDCONTENTARCHIVE_H
#define FCPERSISTEDCONTENTARCHIVE_H

@class NSString;


#import "FCContentArchive.h"

@interface FCPersistedContentArchive : FCContentArchive {
    NSString *_archivePath;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)manifest;
-(id)unarchiveIntoContentContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif