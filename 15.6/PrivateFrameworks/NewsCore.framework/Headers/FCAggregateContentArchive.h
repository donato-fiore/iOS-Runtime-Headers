// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAGGREGATECONTENTARCHIVE_H
#define FCAGGREGATECONTENTARCHIVE_H

@class NSArray;


#import "FCContentArchive.h"

@interface FCAggregateContentArchive : FCContentArchive {
    NSArray *_childArchives;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)manifest;
-(id)unarchiveIntoContentContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif