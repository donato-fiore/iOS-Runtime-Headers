// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDCONTENTSRENDITIONSPEC_H
#define TDCONTENTSRENDITIONSPEC_H

@class NSSet;


#import "TDRenditionSpec.h"

@interface TDContentsRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSSet *contains;


-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif