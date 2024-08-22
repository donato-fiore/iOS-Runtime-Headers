// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMETADATAOBJECTFORMAT_H
#define BWMETADATAOBJECTFORMAT_H

@class NSArray;


#import "BWFormat.h"

@interface BWMetadataObjectFormat : BWFormat {
    NSArray *_metadataIdentifiers;
}




+(id)formatWithMetadataIdentifiers:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMetadataIdentifiers:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif